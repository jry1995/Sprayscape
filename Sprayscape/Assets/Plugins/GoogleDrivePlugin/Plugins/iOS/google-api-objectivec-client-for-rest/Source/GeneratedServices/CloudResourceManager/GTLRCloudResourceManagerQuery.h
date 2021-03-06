// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Resource Manager API (cloudresourcemanager/v1)
// Description:
//   The Google Cloud Resource Manager API provides methods for creating,
//   reading, and updating project metadata.
// Documentation:
//   https://cloud.google.com/resource-manager

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudResourceManager_GetIamPolicyRequest;
@class GTLRCloudResourceManager_Project;
@class GTLRCloudResourceManager_SetIamPolicyRequest;
@class GTLRCloudResourceManager_TestIamPermissionsRequest;
@class GTLRCloudResourceManager_UndeleteProjectRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Resource Manager query classes.
 */
@interface GTLRCloudResourceManagerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: cloudresourcemanager.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_OperationsGet : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudResourceManager_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRCloudResourceManagerQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Marks the Project identified by the specified `project_id` (for example,
 *  `my-project-123`) for deletion. This method will only affect the Project if
 *  the following criteria are met: + The Project does not have a billing
 *  account associated with it. + The Project has a lifecycle state of ACTIVE.
 *  This method changes the Project's lifecycle state from ACTIVE to
 *  DELETE_REQUESTED. The deletion starts at an unspecified time, at which point
 *  the Project is no longer accessible. Until the deletion completes, you can
 *  check the lifecycle state checked by retrieving the Project with GetProject,
 *  and the Project remains visible to ListProjects. However, you cannot update
 *  the project. After the deletion completes, the Project is not retrievable by
 *  the GetProject and ListProjects methods. The caller must have modify
 *  permissions for this Project.
 *
 *  Method: cloudresourcemanager.projects.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_ProjectsDelete : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsDeleteWithprojectId:]

/** The Project ID (for example, `foo-bar-123`). Required. */
@property(copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRCloudResourceManager_Empty.
 *
 *  Marks the Project identified by the specified `project_id` (for example,
 *  `my-project-123`) for deletion. This method will only affect the Project if
 *  the following criteria are met: + The Project does not have a billing
 *  account associated with it. + The Project has a lifecycle state of ACTIVE.
 *  This method changes the Project's lifecycle state from ACTIVE to
 *  DELETE_REQUESTED. The deletion starts at an unspecified time, at which point
 *  the Project is no longer accessible. Until the deletion completes, you can
 *  check the lifecycle state checked by retrieving the Project with GetProject,
 *  and the Project remains visible to ListProjects. However, you cannot update
 *  the project. After the deletion completes, the Project is not retrievable by
 *  the GetProject and ListProjects methods. The caller must have modify
 *  permissions for this Project.
 *
 *  @param projectId The Project ID (for example, `foo-bar-123`). Required.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsDelete
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId;

@end

/**
 *  Retrieves the Project identified by the specified `project_id` (for example,
 *  `my-project-123`). The caller must have read permissions for this Project.
 *
 *  Method: cloudresourcemanager.projects.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_ProjectsGet : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsGetWithprojectId:]

/** The Project ID (for example, `my-project-123`). Required. */
@property(copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRCloudResourceManager_Project.
 *
 *  Retrieves the Project identified by the specified `project_id` (for example,
 *  `my-project-123`). The caller must have read permissions for this Project.
 *
 *  @param projectId The Project ID (for example, `my-project-123`). Required.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId;

@end

/**
 *  Returns the IAM access control policy for the specified Project. Permission
 *  is denied if the policy or the resource does not exist.
 *
 *  Method: cloudresourcemanager.projects.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_ProjectsGetIamPolicy : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsGetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being requested. `resource`
 *  is usually specified as a path, such as `projects/ *project* /zones/ *zone*
 *  /disks/ *disk*`. The format for the path specified in this value is resource
 *  specific and is specified in the `getIamPolicy` documentation.
 */
@property(copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudResourceManager_Policy.
 *
 *  Returns the IAM access control policy for the specified Project. Permission
 *  is denied if the policy or the resource does not exist.
 *
 *  @param object The @c GTLRCloudResourceManager_GetIamPolicyRequest to include
 *    in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. `resource` is usually specified as a path, such as `projects/
 *    *project* /zones/ *zone* /disks/ *disk*`. The format for the path
 *    specified in this value is resource specific and is specified in the
 *    `getIamPolicy` documentation.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsGetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_GetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Lists Projects that are visible to the user and satisfy the specified
 *  filter. This method returns Projects in an unspecified order. New Projects
 *  do not necessarily appear at the end of the list.
 *
 *  Method: cloudresourcemanager.projects.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_ProjectsList : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsList]

/**
 *  An expression for filtering the results of the request. Filter rules are
 *  case insensitive. The fields eligible for filtering are: + `name` + `id` +
 *  labels.key where *key* is the name of a label Some examples of using labels
 *  as filters: |Filter|Description| |------|-----------| |name:*|The project
 *  has a name.| |name:Howl|The project's name is `Howl` or `howl`.|
 *  |name:HOWL|Equivalent to above.| |NAME:howl|Equivalent to above.|
 *  |labels.color:*|The project has the label `color`.| |labels.color:red|The
 *  project's label `color` has the value `red`.| |labels.color:red
 *  label.size:big|The project's label `color` has the value `red` and its label
 *  `size` has the value `big`. Optional.
 */
@property(copy, nullable) NSString *filter;

/**
 *  The maximum number of Projects to return in the response. The server can
 *  return fewer Projects than requested. If unspecified, server picks an
 *  appropriate default. Optional.
 */
@property(assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to ListProjects that
 *  indicates from where listing should continue. Optional.
 */
@property(copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudResourceManager_ListProjectsResponse.
 *
 *  Lists Projects that are visible to the user and satisfy the specified
 *  filter. This method returns Projects in an unspecified order. New Projects
 *  do not necessarily appear at the end of the list.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Sets the IAM access control policy for the specified Project. Replaces any
 *  existing policy. The following constraints apply when using
 *  `setIamPolicy()`: + Project does not support `allUsers` and
 *  `allAuthenticatedUsers` as `members` in a `Binding` of a `Policy`. + The
 *  owner role can be granted only to `user` and `serviceAccount`. + Service
 *  accounts can be made owners of a project directly without any restrictions.
 *  However, to be added as an owner, a user must be invited via Cloud Platform
 *  console and must accept the invitation. + A user cannot be granted the owner
 *  role using `setIamPolicy()`. The user must be granted the owner role using
 *  the Cloud Platform Console and must explicitly accept the invitation. +
 *  Invitations to grant the owner role cannot be sent using `setIamPolicy()`;
 *  they must be sent only using the Cloud Platform Console. + Membership
 *  changes that leave the project without any owners that have accepted the
 *  Terms of Service (ToS) will be rejected. + Members cannot be added to more
 *  than one role in the same policy. + There must be at least one owner who has
 *  accepted the Terms of Service (ToS) agreement in the policy. Calling
 *  `setIamPolicy()` to to remove the last ToS-accepted owner from the policy
 *  will fail. This restriction also applies to legacy projects that no longer
 *  have owners who have accepted the ToS. Edits to IAM policies will be
 *  rejected until the lack of a ToS-accepting owner is rectified. + Calling
 *  this method requires enabling the App Engine Admin API. Note: Removing
 *  service accounts from policies or changing their roles can render services
 *  completely inoperable. It is important to understand how the service account
 *  is being used before removing or updating its roles.
 *
 *  Method: cloudresourcemanager.projects.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_ProjectsSetIamPolicy : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified. `resource`
 *  is usually specified as a path, such as `projects/ *project* /zones/ *zone*
 *  /disks/ *disk*`. The format for the path specified in this value is resource
 *  specific and is specified in the `setIamPolicy` documentation.
 */
@property(copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudResourceManager_Policy.
 *
 *  Sets the IAM access control policy for the specified Project. Replaces any
 *  existing policy. The following constraints apply when using
 *  `setIamPolicy()`: + Project does not support `allUsers` and
 *  `allAuthenticatedUsers` as `members` in a `Binding` of a `Policy`. + The
 *  owner role can be granted only to `user` and `serviceAccount`. + Service
 *  accounts can be made owners of a project directly without any restrictions.
 *  However, to be added as an owner, a user must be invited via Cloud Platform
 *  console and must accept the invitation. + A user cannot be granted the owner
 *  role using `setIamPolicy()`. The user must be granted the owner role using
 *  the Cloud Platform Console and must explicitly accept the invitation. +
 *  Invitations to grant the owner role cannot be sent using `setIamPolicy()`;
 *  they must be sent only using the Cloud Platform Console. + Membership
 *  changes that leave the project without any owners that have accepted the
 *  Terms of Service (ToS) will be rejected. + Members cannot be added to more
 *  than one role in the same policy. + There must be at least one owner who has
 *  accepted the Terms of Service (ToS) agreement in the policy. Calling
 *  `setIamPolicy()` to to remove the last ToS-accepted owner from the policy
 *  will fail. This restriction also applies to legacy projects that no longer
 *  have owners who have accepted the ToS. Edits to IAM policies will be
 *  rejected until the lack of a ToS-accepting owner is rectified. + Calling
 *  this method requires enabling the App Engine Admin API. Note: Removing
 *  service accounts from policies or changing their roles can render services
 *  completely inoperable. It is important to understand how the service account
 *  is being used before removing or updating its roles.
 *
 *  @param object The @c GTLRCloudResourceManager_SetIamPolicyRequest to include
 *    in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. `resource` is usually specified as a path, such as `projects/
 *    *project* /zones/ *zone* /disks/ *disk*`. The format for the path
 *    specified in this value is resource specific and is specified in the
 *    `setIamPolicy` documentation.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified Project.
 *
 *  Method: cloudresourcemanager.projects.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatformReadOnly
 */
@interface GTLRCloudResourceManagerQuery_ProjectsTestIamPermissions : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  `resource` is usually specified as a path, such as `projects/ *project*
 *  /zones/ *zone* /disks/ *disk*`. The format for the path specified in this
 *  value is resource specific and is specified in the `testIamPermissions`
 *  documentation.
 */
@property(copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudResourceManager_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified Project.
 *
 *  @param object The @c GTLRCloudResourceManager_TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. `resource` is usually specified as a path, such as `projects/
 *    *project* /zones/ *zone* /disks/ *disk*`. The format for the path
 *    specified in this value is resource specific and is specified in the
 *    `testIamPermissions` documentation.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Restores the Project identified by the specified `project_id` (for example,
 *  `my-project-123`). You can only use this method for a Project that has a
 *  lifecycle state of DELETE_REQUESTED. After deletion starts, the Project
 *  cannot be restored. The caller must have modify permissions for this
 *  Project.
 *
 *  Method: cloudresourcemanager.projects.undelete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_ProjectsUndelete : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsUndeleteWithObject:projectId:]

/** The project ID (for example, `foo-bar-123`). Required. */
@property(copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRCloudResourceManager_Empty.
 *
 *  Restores the Project identified by the specified `project_id` (for example,
 *  `my-project-123`). You can only use this method for a Project that has a
 *  lifecycle state of DELETE_REQUESTED. After deletion starts, the Project
 *  cannot be restored. The caller must have modify permissions for this
 *  Project.
 *
 *  @param object The @c GTLRCloudResourceManager_UndeleteProjectRequest to
 *    include in the query.
 *  @param projectId The project ID (for example, `foo-bar-123`). Required.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsUndelete
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_UndeleteProjectRequest *)object
                      projectId:(NSString *)projectId;

@end

/**
 *  Updates the attributes of the Project identified by the specified
 *  `project_id` (for example, `my-project-123`). The caller must have modify
 *  permissions for this Project.
 *
 *  Method: cloudresourcemanager.projects.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudResourceManagerCloudPlatform
 */
@interface GTLRCloudResourceManagerQuery_ProjectsUpdate : GTLRCloudResourceManagerQuery
// Previous library name was
//   +[GTLQueryCloudResourceManager queryForProjectsUpdateWithObject:projectId:]

/** The project ID (for example, `my-project-123`). Required. */
@property(copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRCloudResourceManager_Project.
 *
 *  Updates the attributes of the Project identified by the specified
 *  `project_id` (for example, `my-project-123`). The caller must have modify
 *  permissions for this Project.
 *
 *  @param object The @c GTLRCloudResourceManager_Project to include in the
 *    query.
 *  @param projectId The project ID (for example, `my-project-123`). Required.
 *
 *  @returns GTLRCloudResourceManagerQuery_ProjectsUpdate
 */
+ (instancetype)queryWithObject:(GTLRCloudResourceManager_Project *)object
                      projectId:(NSString *)projectId;

@end

NS_ASSUME_NONNULL_END
