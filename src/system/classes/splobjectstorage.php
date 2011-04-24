<?php

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/class.splobjectstorage.php )
 *
 * The SplObjectStorage class provides a map from objects to data or, by
 * ignoring data, an object set. This dual purpose can be useful in many
 * cases involving the need to uniquely identify objects.
 *
 */
class SplObjectStorage implements Iterator, Countable {
  private $storage = array();
  private $index = 0;

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.rewind.php )
 *
 * Rewind the iterator to the first storage element.
 *
 * @return     mixed   No value is returned.
 */
  function rewind() {
    reset($this->storage);
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.valid.php )
 *
 * Returns if the current iterator entry is valid.
 *
 * @return     mixed   Returns TRUE if the iterator entry is valid, FALSE
 *                     otherwise.
 */
  function valid() {
    return key($this->storage) !== false;
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.key.php )
 *
 * Returns the index at which the iterator currently is.
 *
 * @return     mixed   The index corresponding to the position of the
 *                     iterator.
 */
  function key() {
    return $this->index;
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.current.php )
 *
 * Returns the current storage entry.
 *
 * @return     mixed   The object at the current iterator position.
 */
  function current() {
    return current($this->storage);
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.next.php )
 *
 * Moves the iterator to the next object in the storage.
 *
 * @return     mixed   No value is returned.
 */
  function next() {
    next($this->storage);
    $this->index++;
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.count.php )
 *
 * Counts the number of objects in the storage.
 *
 * @return     mixed   The number of objects in the storage.
 */
  function count() {
    return count($this->storage);
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.contains.php )
 *
 * Checks if the storage contains the object provided.
 *
 * @obj        mixed   The object to look for.
 *
 * @return     mixed   Returns TRUE if the object is in the storage, FALSE
 *                     otherwise.
 */
  function contains($obj) {
    if (is_object($obj)) {
      foreach($this->storage as $object) {
        if ($object === $obj) {
          return true;
        }
      }
    }
    return false;
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.attach.php )
 *
 * Adds an object inside the storage, and optionaly associate it to some
 * data.
 *
 * @obj        mixed   The object to add.
 *
 * @return     mixed   No value is returned.
 */
  function attach($obj) {
    if (is_object($obj) && !$this->contains($obj)) {
      $this->storage[] = $obj;
    }
  }

// Do NOT modifiy this doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/splobjectstorage.detach.php )
 *
 * Removes the object from the storage.
 *
 * @obj        mixed   The object to remove.
 *
 * @return     mixed   No value is returned.
 */
  function detach($obj) {
    if (is_object($obj)) {
      foreach($this->storage as $idx => $object) {
        if ($object === $obj) {
          unset($this->storage[$idx]);
          $this->rewind();
          return;
        }
      }
    }
  }
}
