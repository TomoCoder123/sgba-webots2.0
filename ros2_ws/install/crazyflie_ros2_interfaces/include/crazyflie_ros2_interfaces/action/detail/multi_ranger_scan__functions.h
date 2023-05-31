// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from crazyflie_ros2_interfaces:action/MultiRangerScan.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__FUNCTIONS_H_
#define CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "crazyflie_ros2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "crazyflie_ros2_interfaces/action/detail/multi_ranger_scan__struct.h"

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal *
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Goal__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_Result *
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Result * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Result * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Result * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Result * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Result__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback *
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_Feedback__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Request__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_SendGoal_Response__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Request__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_GetResult_Response__Sequence * output);

/// Initialize action/MultiRangerScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage
 * )) before or use
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg);

/// Finalize action/MultiRangerScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg);

/// Create action/MultiRangerScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage *
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__create();

/// Destroy action/MultiRangerScan message.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * msg);

/// Check for action/MultiRangerScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * rhs);

/// Copy a action/MultiRangerScan message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage * output);

/// Initialize array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__init(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__fini(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array);

/// Create array of action/MultiRangerScan messages.
/**
 * It allocates the memory for the array and calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence *
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MultiRangerScan messages.
/**
 * It calls
 * crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
void
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__destroy(crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * array);

/// Check for action/MultiRangerScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__are_equal(const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * lhs, const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MultiRangerScan messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_crazyflie_ros2_interfaces
bool
crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence__copy(
  const crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * input,
  crazyflie_ros2_interfaces__action__MultiRangerScan_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CRAZYFLIE_ROS2_INTERFACES__ACTION__DETAIL__MULTI_RANGER_SCAN__FUNCTIONS_H_
