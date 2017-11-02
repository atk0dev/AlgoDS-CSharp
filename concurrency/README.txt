Projects:

* Queue.Common

Contains the IQueue and QueueEmptyException types used by the other projects

* Queue.Client

A sample application that uses the queue types without any caller side locking

* Queue.Client.Lockng

A sample application that uses the queue types with client side locking

* Queue.Locking

A queue type that uses monitor locking to provide method level thread safety

* Queue.ReadWriteLock

A queue type that uses ReaderWriterLockSlim to provide method level thread safety

* Queue.Single

A queue type that does not provide any thread safety