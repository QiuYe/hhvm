<?php
/**
 * Automatically generated by running "php schema.php thread".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP

CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )


///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

DefineFunction(
  array(
    'name'   => "hphp_is_service_thread",
    'desc'   => "Returns an indication of whether the current thread is a service thread or not.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "TRUE if the current thread is a service thread, FALSE otherwise."
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "hphp_service_thread_started",
    'desc'   => "A function to call to tell system a service thread has completed its startup.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => null,
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "hphp_service_thread_stopped",
    'desc'   => "A function to call to ask system whether a service thread should stop.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "TRUE if HTTP server is stopping and service thread should stop, FALSE otherwise.",
    ),
    'args'   => array(
      array(
        'name'   => "timeout",
        'type'   => Int32,
        'desc'   => "How many seconds to wait for system to tell us.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "hphp_thread_is_warmup_enabled",
    'desc'   => "Whether current thread is warmed up with some PHP document.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "TRUE if warmed up already, FALSE otherwise.",
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "hphp_thread_set_warmup_enabled",
    'desc'   => "Enables warmup document.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => null,
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "hphp_get_thread_id",
    'desc'   => "Gets current thread's ID.",
    'flags'  =>  HasDocComment | HipHopSpecific,
    'return' => array(
      'type'   => Int64,
      'desc'   => "The pthread_self() return.",
    ),
    'taint_observer' => false,
  ));


///////////////////////////////////////////////////////////////////////////////
// Classes
//
// BeginClass
// array (
//   'name'   => name of the class
//   'desc'   => description of the class's purpose
//   'flags'  => attributes of the class, see base.php for possible values
//   'note'   => additional note about this class's schema
//   'parent' => parent class name, if any
//   'ifaces' => array of interfaces tihs class implements
//   'bases'  => extra internal and special base classes this class requires
//   'footer' => extra C++ inserted at end of class declaration
// )
//
// DefineConstant(..)
// DefineConstant(..)
// ...
// DefineFunction(..)
// DefineFunction(..)
// ...
// DefineProperty
// DefineProperty
//
// array (
//   'name'  => name of the property
//   'type'  => type of the property
//   'flags' => attributes of the property
//   'desc'  => description of the property
//   'note'  => additional note about this property's schema
// )
//
// EndClass()

