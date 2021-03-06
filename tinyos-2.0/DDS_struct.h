typedef struct {
	uint32_t sec;
	uint32_t nanosec;
} Duration_t;

typedef nx_struct {
	nx_uint32_t sec;
	nx_uint32_t nanosec;
} Time_t;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
} InconsistentTopicStatus;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
} SampleLostStatus;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	SampleRejectedStatusKind last_reason;
	InstanceHandle_t last_instance_handle;
} SampleRejectedStatus;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
} LivelinessLostStatus;

typedef struct {
	uint32_t active_count;
	uint32_t inactive_count;
	uint32_t active_count_change;
	uint32_t inactive_count_change;
} LivelinessChangedStatus;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	InstanceHandle_t last_instance_handle;
} OfferedDeadlineMissedStatus;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	InstanceHandle_t last_instance_handle;
} RequestedDeadlineMissedStatus;

typedef struct {
	QosPolicyId_t policy_id;
	uint32_t count;
} QosPolicyCount;

/*typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	QosPolicyId_t last_policy_id;
	QosPolicyCountSeq policies;
} OfferedIncompatibleQosStatus;*/

/*typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	QosPolicyId_t last_policy_id;
	QosPolicyCountSeq policies;
} RequestedIncompatibleQosStatus;*/

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	InstanceHandle_t last_subscription_handle;
} PublicationMatchStatus;

typedef struct {
	uint32_t total_count;
	uint32_t total_count_change;
	InstanceHandle_t last_publication_handle;
} SubscriptionMatchStatus;

/*typedef struct {
	struct {
		uint _length;
		uint8_t* _buffer;
	} value;
} UserDataQosPolicy;*/

/*typedef struct {
	struct {
		uint _length;
		uint8_t* _buffer;
	} value;
} TopicDataQosPolicy;*/

/*typedef struct {
	struct {
		uint _length;
		uint8_t* _buffer;
	} value;
} GroupDataQosPolicy;*/

typedef struct {
	uint32_t value;
} TransportPriorityQosPolicy;

typedef struct {
	Duration_t duration;
} LifespanQosPolicy;

typedef struct {
	DurabilityQosPolicyKind kind;
	Duration_t service_cleanup_delay;
} DurabilityQosPolicy;

typedef struct {
	PresentationQosPolicyAccessScopeKind access_scope;
	bool coherent_access;
	bool ordered_access;
} PresentationQosPolicy;

typedef struct {
	Duration_t period;
} DeadlineQosPolicy;

typedef struct {
	Duration_t duration;
} LatencyBudgetQosPolicy;

typedef struct {
	OwnershipQosPolicyKind kind;
} OwnershipQosPolicy;

typedef struct {
	uint32_t value;
} OwnershipStrengthQosPolicy;

typedef struct {
	LivelinessQosPolicyKind kind;
	Duration_t lease_duration;
} LivelinessQosPolicy;

typedef struct {
	Duration_t minimum_separation;
} TimeBasedFilterQosPolicy;

/*typedef struct {
	StringSeq name;
} PartitionQosPolicy;*/

typedef struct {
	ReliabilityQosPolicyKind kind;
	Duration_t max_blocking_time;
} ReliabilityQosPolicy;

typedef struct {
	DestinationOrderQosPolicyKind kind;
} DestinationOrderQosPolicy;

typedef struct {
	HistoryQosPolicyKind kind;
	uint32_t depth;
} HistoryQosPolicy;

typedef struct {
	uint32_t max_samples;
	uint32_t max_instances;
	uint32_t max_samples_per_instance;
} ResourceLimitsQosPolicy;

typedef struct {
	bool autoenable_created_entities;
} EntityFactoryQosPolicy;

typedef struct {
	bool autodispose_unregistered_instances;
} WriterDataLifecycleQosPolicy;

typedef struct {
	Duration_t autopurge_nowriter_samples_delay;
} ReaderDataLifecycleQosPolicy;

/*typedef struct {
	UserDataQosPolicy user_data;
	EntityFactoryQosPolicy entity_factory;
} DomainParticipantQos;*/

typedef struct {
	//TopicDataQosPolicy topic_data;
	DurabilityQosPolicy durability;
	DeadlineQosPolicy deadline;
	LatencyBudgetQosPolicy latency_budget;
	LivelinessQosPolicy liveliness;
	ReliabilityQosPolicy reliability;
	DestinationOrderQosPolicy destination_order;
	HistoryQosPolicy history;
	ResourceLimitsQosPolicy resource_limits;
	TransportPriorityQosPolicy transport_priority;
	LifespanQosPolicy lifespan;
	OwnershipQosPolicy ownership;
} TopicQos;

typedef struct {
	DurabilityQosPolicy durability;
	DeadlineQosPolicy deadline;
	LatencyBudgetQosPolicy latency_budget;
	LivelinessQosPolicy liveliness;
	ReliabilityQosPolicy reliability;
	DestinationOrderQosPolicy destination_order;
	HistoryQosPolicy history;
	ResourceLimitsQosPolicy resource_limits;
	TransportPriorityQosPolicy transport_priority;
	LifespanQosPolicy lifespan;
	//UserDataQosPolicy user_data;
	OwnershipStrengthQosPolicy ownership_strength;
	WriterDataLifecycleQosPolicy writer_data_lifecycle;
} DataWriterQos;

typedef struct {
	PresentationQosPolicy presentation;
	//PartitionQosPolicy partition;
	//GroupDataQosPolicy group_data;
	EntityFactoryQosPolicy entity_factory;
} PublisherQos;

typedef struct {
	DurabilityQosPolicy durability;
	DeadlineQosPolicy deadline;
	LatencyBudgetQosPolicy latency_budget;
	LivelinessQosPolicy liveliness;
	ReliabilityQosPolicy reliability;
	DestinationOrderQosPolicy destination_order;
	HistoryQosPolicy history;
	ResourceLimitsQosPolicy resource_limits;
	//UserDataQosPolicy user_data;
	TimeBasedFilterQosPolicy time_based_filter;
	ReaderDataLifecycleQosPolicy reader_data_lifecycle;
} DataReaderQos;

typedef struct {
	PresentationQosPolicy presentation;
	//PartitionQosPolicy partition;
	//GroupDataQosPolicy group_data;
	EntityFactoryQosPolicy entity_factory;
} SubscriberQos;

typedef struct {
	BuiltinTopicKey_t key;
	//UserDataQosPolicy user_data;
} ParticipantBuiltinTopicData;

typedef struct {
	BuiltinTopicKey_t key;
	char * name;
	char * type_name;
	DurabilityQosPolicy durability;
	DeadlineQosPolicy deadline;
	LatencyBudgetQosPolicy latency_budget;
	LivelinessQosPolicy liveliness;
	ReliabilityQosPolicy reliability;
	TransportPriorityQosPolicy transport_priority;
	LifespanQosPolicy lifespan;
	DestinationOrderQosPolicy destination_order;
	HistoryQosPolicy history;
	ResourceLimitsQosPolicy resource_limits;
	OwnershipQosPolicy ownership;
	//TopicDataQosPolicy topic_data;
} TopicBuiltinTopicData;

typedef struct {
	BuiltinTopicKey_t key;
	BuiltinTopicKey_t participant_key;
	char * topic_name;
	char * type_name;
	DurabilityQosPolicy durability;
	DeadlineQosPolicy deadline;
	LatencyBudgetQosPolicy latency_budget;
	LivelinessQosPolicy liveliness;
	ReliabilityQosPolicy reliability;
	LifespanQosPolicy lifespan;
	//UserDataQosPolicy user_data;
	OwnershipStrengthQosPolicy ownership_strength;
	PresentationQosPolicy presentation;
	//PartitionQosPolicy partition;
	//TopicDataQosPolicy topic_data;
	//GroupDataQosPolicy group_data;
} PublicationBuiltinTopicData;

typedef struct {
	BuiltinTopicKey_t key;
	BuiltinTopicKey_t participant_key;
	char * topic_name;
	char * type_name;
	DurabilityQosPolicy durability;
	DeadlineQosPolicy deadline;
	LatencyBudgetQosPolicy latency_budget;
	LivelinessQosPolicy liveliness;
	ReliabilityQosPolicy reliability;
	DestinationOrderQosPolicy destination_order;
	//UserDataQosPolicy user_data;
	TimeBasedFilterQosPolicy time_based_filter;
	PresentationQosPolicy presentation;
	//PartitionQosPolicy partition;
	//TopicDataQosPolicy topic_data;
	//GroupDataQosPolicy group_data;
} SubscriptionBuiltinTopicData;

typedef struct {
	SampleStateKind sample_state;
	ViewStateKind view_state;
	InstanceStateKind instance_state;
	Time_t source_timestamp;
	InstanceHandle_t instance_handle;
	uint32_t disposed_generation_count;
	uint32_t no_writers_generation_count;
	uint32_t sample_rank;
	uint32_t generation_rank;
	uint32_t absolute_generation_rank;
} SampleInfo;

