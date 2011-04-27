# 1 "board-zte-blade.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "board-zte-blade.c"
# 17 "board-zte-blade.c"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kernel.h" 1
# 738 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kernel.h"
struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 18 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/init.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/compiler.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/init.h" 2
# 131 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


typedef void (*ctor_fn_t)(void);


extern int do_one_initcall(initcall_t fn);
extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);

extern void (*late_time_init)(void);

extern int initcall_debug;
# 218 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 247 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/init.h"
void __attribute__ ((__section__(".init.text"))) notrace parse_early_param(void);
void __attribute__ ((__section__(".init.text"))) notrace parse_early_options(char *cmdline);
# 19 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/platform_device.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/platform_device.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 1
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioport.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioport.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/types.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/types.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/int-ll64.h" 1
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/int-ll64.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/bitsperlong.h" 1
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/bitsperlong.h" 1
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/bitsperlong.h" 2
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/int-ll64.h" 2







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/types.h" 2



typedef unsigned short umode_t;
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/types.h" 2
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/types.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/posix_types.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/stddef.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/posix_types.h" 2
# 36 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/posix_types.h" 1
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/posix_types.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;
# 48 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/posix_types.h" 2
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/types.h" 2
# 168 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioport.h" 2




struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 113 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioport.h"
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern struct resource *request_resource_conflict(struct resource *root, struct resource *new);
extern int request_resource(struct resource *root, struct resource *new);
extern struct resource *locate_resource(struct resource *root,
 struct resource *search);
extern int release_resource(struct resource *new);
void release_child_resources(struct resource *new);
extern void reserve_region_with_split(struct resource *root,
        resource_size_t start, resource_size_t end,
        const char *name);
extern struct resource *insert_resource_conflict(struct resource *parent, struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern void insert_resource_expand_to_fit(struct resource *root, struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        resource_size_t (*alignf)(void *,
             const struct resource *,
             resource_size_t,
             resource_size_t),
        void *alignf_data);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);
static inline resource_size_t resource_size(const struct resource *res)
{
 return res->end - res->start + 1;
}
static inline unsigned long resource_type(const struct resource *res)
{
 return res->flags & 0x00001f00;
}
# 157 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioport.h"
extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n,
     const char *name, int flags);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline int __deprecated check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&ioport_resource, s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, const char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
extern int iomem_map_sanity_check(resource_size_t addr, unsigned long size);
extern int iomem_is_exclusive(u64 addr);

extern int
walk_system_ram_range(unsigned long start_pfn, unsigned long nr_pages,
  void *arg, int (*func)(unsigned long, unsigned long, void *));
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/poison.h" 1
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/prefetch.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/prefetch.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/processor.h" 1
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/prefetch.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/cache.h" 1
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/prefetch.h" 2
# 53 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/prefetch.h"
static inline void prefetch_range(void *addr, size_t len)
{







}
# 7 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/system.h" 1
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h" 2
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 41 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 64 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 78 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 90 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 103 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100 + 0);
 entry->prev = ((void *) 0x00200200 + 0);
}
# 120 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}





static inline void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add_tail(list, head);
}






static inline int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 202 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline void list_rotate_left(struct list_head *head)
{
 struct list_head *first;

 if (!list_empty(head)) {
  first = head->next;
  list_move_tail(first, head);
 }
}





static inline int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline void __list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 struct list_head *new_first = entry->next;
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry;
 entry->next = list;
 head->next = new_first;
 new_first->prev = head;
}
# 257 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 if (list_empty(head))
  return;
 if (list_is_singular(head) &&
  (head->next != entry && head != entry))
  return;
 if (entry == head)
  INIT_LIST_HEAD(list);
 else
  __list_cut_position(list, head, entry);
}

static inline void __list_splice(const struct list_head *list,
     struct list_head *prev,
     struct list_head *next)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;

 first->prev = prev;
 prev->next = first;

 last->next = next;
 next->prev = last;
}






static inline void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head, head->next);
}






static inline void list_splice_tail(struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head->prev, head);
}
# 316 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
# 333 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
static inline void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
# 569 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100 + 0);
 n->pprev = ((void *) 0x00200200 + 0);
}

static inline void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}

static inline void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}


static inline void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}





static inline void hlist_move_list(struct hlist_head *old,
       struct hlist_head *new)
{
 new->first = old->first;
 if (new->first)
  new->first->pprev = &new->first;
 old->first = ((void *)0);
}
# 21 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h" 1
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/errno.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/errno.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/errno.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/errno-base.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/errno.h" 2
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/errno.h" 2
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/errno.h" 2
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lockdep.h" 1
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lockdep.h"
struct task_struct;
struct lockdep_map;


extern int prove_locking;
extern int lock_stat;
# 337 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lockdep.h"
static inline void lockdep_off(void)
{
}

static inline void lockdep_on(void)
{
}
# 378 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lockdep.h"
struct lock_class_key { };
# 430 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lockdep.h"
static inline void early_init_irq_lock_class(void)
{
}







static inline void early_boot_irqs_off(void)
{
}
static inline void early_boot_irqs_on(void)
{
}
static inline void print_irqtrace_events(struct task_struct *curr)
{
}
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/atomic.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h" 2

struct kobject;
struct module;
enum kobj_ns_type;






struct attribute {
 const char *name;
 struct module *owner;
 mode_t mode;




};
# 61 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h"
struct attribute_group {
 const char *name;
 mode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
# 90 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h"
struct file;
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct file *, struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct file *,struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct file *, struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};
# 117 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h"
struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent;
# 189 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sysfs.h"
static inline int sysfs_schedule_callback(struct kobject *kobj,
  void (*func)(void *), void *data, struct module *owner)
{
 return -38;
}

static inline int sysfs_create_dir(struct kobject *kobj)
{
 return 0;
}

static inline void sysfs_remove_dir(struct kobject *kobj)
{
}

static inline int sysfs_rename_dir(struct kobject *kobj, const char *new_name)
{
 return 0;
}

static inline int sysfs_move_dir(struct kobject *kobj,
     struct kobject *new_parent_kobj)
{
 return 0;
}

static inline int sysfs_create_file(struct kobject *kobj,
        const struct attribute *attr)
{
 return 0;
}

static inline int sysfs_create_files(struct kobject *kobj,
        const struct attribute **attr)
{
 return 0;
}

static inline int sysfs_chmod_file(struct kobject *kobj,
       struct attribute *attr, mode_t mode)
{
 return 0;
}

static inline void sysfs_remove_file(struct kobject *kobj,
         const struct attribute *attr)
{
}

static inline void sysfs_remove_files(struct kobject *kobj,
         const struct attribute **attr)
{
}

static inline int sysfs_create_bin_file(struct kobject *kobj,
     const struct bin_attribute *attr)
{
 return 0;
}

static inline void sysfs_remove_bin_file(struct kobject *kobj,
      const struct bin_attribute *attr)
{
}

static inline int sysfs_create_link(struct kobject *kobj,
        struct kobject *target, const char *name)
{
 return 0;
}

static inline int sysfs_create_link_nowarn(struct kobject *kobj,
        struct kobject *target,
        const char *name)
{
 return 0;
}

static inline void sysfs_remove_link(struct kobject *kobj, const char *name)
{
}

static inline int sysfs_rename_link(struct kobject *k, struct kobject *t,
        const char *old_name, const char *new_name)
{
 return 0;
}

static inline void sysfs_delete_link(struct kobject *k, struct kobject *t,
         const char *name)
{
}

static inline int sysfs_create_group(struct kobject *kobj,
         const struct attribute_group *grp)
{
 return 0;
}

static inline int sysfs_update_group(struct kobject *kobj,
    const struct attribute_group *grp)
{
 return 0;
}

static inline void sysfs_remove_group(struct kobject *kobj,
          const struct attribute_group *grp)
{
}

static inline int sysfs_add_file_to_group(struct kobject *kobj,
  const struct attribute *attr, const char *group)
{
 return 0;
}

static inline void sysfs_remove_file_from_group(struct kobject *kobj,
  const struct attribute *attr, const char *group)
{
}

static inline void sysfs_notify(struct kobject *kobj, const char *dir,
    const char *attr)
{
}
static inline void sysfs_notify_dirent(struct sysfs_dirent *sd)
{
}
static inline
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
          const void *ns,
          const unsigned char *name)
{
 return ((void *)0);
}
static inline struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd)
{
 return ((void *)0);
}
static inline void sysfs_put(struct sysfs_dirent *sd)
{
}

static inline void sysfs_exit_ns(int type, const void *tag)
{
}

static inline int __must_check sysfs_init(void)
{
 return 0;
}

static inline void sysfs_printk_last_file(void)
{
}
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 1
# 49 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/typecheck.h" 1
# 50 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/preempt.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/preempt.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/thread_info.h" 1
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/thread_info.h"
struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {
  struct {
   unsigned long arg0, arg1, arg2, arg3;
  };

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
   u32 *uaddr2;
  } futex;

  struct {
   clockid_t index;
   struct timespec *rmtp;



   u64 expires;
  } nanosleep;

  struct {
   struct pollfd *ufds;
   int nfds;
   int has_timeout;
   unsigned long tv_sec;
   unsigned long tv_nsec;
  } poll;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitops.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitops.h"
extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);





# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/bitops.h" 1
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitops.h" 2






static __inline__ int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}






static inline __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}

static inline unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 127 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitops.h"
static inline unsigned long __ffs64(u64 word)
{






 return __ffs((unsigned long)word);
}
# 56 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/thread_info.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/thread_info.h" 1
# 57 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/thread_info.h" 2
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/preempt.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/linkage.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/linkage.h" 1
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/linkage.h" 2
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/preempt.h" 2
# 51 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/stringify.h" 1
# 56 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bottom_half.h" 1



extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
# 57 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2
# 80 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h" 1
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types_up.h" 1
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types_up.h"
typedef struct { } arch_spinlock_t;





typedef struct {

} arch_rwlock_t;
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h" 2




typedef struct raw_spinlock {
 arch_spinlock_t raw_lock;
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h"
} raw_spinlock_t;
# 64 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h"
typedef struct spinlock {
 union {
  struct raw_spinlock rlock;
# 75 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h"
 };
} spinlock_t;
# 94 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwlock_types.h" 1
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwlock_types.h"
typedef struct {
 arch_rwlock_t raw_lock;
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwlock_types.h"
} rwlock_t;
# 95 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_types.h" 2
# 81 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_up.h" 1
# 89 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2
# 121 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
static inline void smp_mb__after_lock(void) { smp_mb(); }
# 136 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
static inline void do_raw_spin_lock(raw_spinlock_t *lock)
{
 (void)0;
 do { (void)(&lock->raw_lock); } while (0);
}

static inline void
do_raw_spin_lock_flags(raw_spinlock_t *lock, unsigned long *flags)
{
 (void)0;
 do { (void)(&lock->raw_lock); } while (0);
}

static inline int do_raw_spin_trylock(raw_spinlock_t *lock)
{
 return ({ (void)(&(lock)->raw_lock); 1; });
}

static inline void do_raw_spin_unlock(raw_spinlock_t *lock)
{
 do { (void)(&lock->raw_lock); } while (0);
 (void)0;
}
# 256 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwlock.h" 1
# 257 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock_api_up.h" 1
# 265 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h" 2






static inline raw_spinlock_t *spinlock_check(spinlock_t *lock)
{
 return &lock->rlock;
}







static inline void spin_lock(spinlock_t *lock)
{
 do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0);
}

static inline void spin_lock_bh(spinlock_t *lock)
{
 do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); } while (0);
}

static inline int spin_trylock(spinlock_t *lock)
{
 return (({ do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); 1; }));
}
# 307 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
static inline void spin_lock_irq(spinlock_t *lock)
{
 do { local_irq_disable(); do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); } while (0);
}
# 322 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
static inline void spin_unlock(spinlock_t *lock)
{
 do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0);
}

static inline void spin_unlock_bh(spinlock_t *lock)
{
 do { do { } while (0); local_bh_enable(); (void)0; (void)(&lock->rlock); } while (0);
}

static inline void spin_unlock_irq(spinlock_t *lock)
{
 do { local_irq_enable(); do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); } while (0);
}

static inline void spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
{
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); do { local_irq_restore(flags); do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); } while (0); } while (0);
}

static inline int spin_trylock_bh(spinlock_t *lock)
{
 return (({ do { local_bh_disable(); do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); } while (0); 1; }));
}

static inline int spin_trylock_irq(spinlock_t *lock)
{
 return ({ local_irq_disable(); (({ do { do { } while (0); (void)0; (void)(&lock->rlock); } while (0); 1; })) ? 1 : ({ local_irq_enable(); 0; }); });
}






static inline void spin_unlock_wait(spinlock_t *lock)
{
 do { cpu_relax(); } while (((void)(&(&lock->rlock)->raw_lock), 0));
}

static inline int spin_is_locked(spinlock_t *lock)
{
 return ((void)(&(&lock->rlock)->raw_lock), 0);
}

static inline int spin_is_contended(spinlock_t *lock)
{
 return (((void)(&(&lock->rlock)->raw_lock), 0));
}

static inline int spin_can_lock(spinlock_t *lock)
{
 return (!((void)(&(&lock->rlock)->raw_lock), 0));
}

static inline void assert_spin_locked(spinlock_t *lock)
{
 do { (void)(&lock->rlock); } while (0);
}
# 395 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/spinlock.h"
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kref.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/wait.h" 1
# 27 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h" 2







extern char uevent_helper[];


extern u64 uevent_seqnum;
# 49 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h"
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 const char *name;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 struct kref kref;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
 unsigned int uevent_suppress:1;
};

extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
       __attribute__((format(printf, 2, 3)));
extern int kobject_set_name_vargs(struct kobject *kobj, const char *fmt,
      va_list vargs);

static inline const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int __must_check kobject_add(struct kobject *kobj,
        struct kobject *parent,
        const char *fmt, ...);
extern int __must_check kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          const char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * __must_check kobject_create(void);
extern struct kobject * __must_check kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int __must_check kobject_rename(struct kobject *, const char *new_name);
extern int __must_check kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 const struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
 const struct kobj_ns_type_operations *(*child_ns_type)(struct kobject *kobj);
 const void *(*namespace)(struct kobject *kobj);
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (* const filter)(struct kset *kset, struct kobject *kobj);
 const char *(* const name)(struct kset *kset, struct kobject *kobj);
 int (* const uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

extern const struct sysfs_ops kobj_sysfs_ops;





enum kobj_ns_type {
 KOBJ_NS_TYPE_NONE = 0,
 KOBJ_NS_TYPE_NET,
 KOBJ_NS_TYPES
};

struct sock;







struct kobj_ns_type_operations {
 enum kobj_ns_type type;
 const void *(*current_ns)(void);
 const void *(*netlink_ns)(struct sock *sk);
 const void *(*initial_ns)(void);
};

int kobj_ns_type_register(const struct kobj_ns_type_operations *ops);
int kobj_ns_type_registered(enum kobj_ns_type type);
const struct kobj_ns_type_operations *kobj_child_ns_ops(struct kobject *parent);
const struct kobj_ns_type_operations *kobj_ns_ops(struct kobject *kobj);

const void *kobj_ns_current(enum kobj_ns_type type);
const void *kobj_ns_netlink(enum kobj_ns_type type, struct sock *sk);
const void *kobj_ns_initial(enum kobj_ns_type type);
void kobj_ns_exit(enum kobj_ns_type type, const void *ns);
# 192 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h"
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 const struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int __must_check kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * __must_check kset_create_and_add(const char *name,
      const struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? container_of(kobj, struct kset, kobj) : ((void *)0);
}

static inline struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);


extern struct kobject *kernel_kobj;

extern struct kobject *mm_kobj;

extern struct kobject *hypervisor_kobj;

extern struct kobject *power_kobj;

extern struct kobject *firmware_kobj;
# 250 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kobject.h"
static inline int kobject_uevent(struct kobject *kobj,
     enum kobject_action action)
{ return 0; }
static inline int kobject_uevent_env(struct kobject *kobj,
          enum kobject_action action,
          char *envp[])
{ return 0; }

static inline int add_uevent_var(struct kobj_uevent_env *env,
     const char *format, ...)
{ return 0; }

static inline int kobject_action_type(const char *buf, size_t count,
          enum kobject_action *type)
{ return -22; }
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/klist.h" 1
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
} __attribute__ ((aligned (4)));
# 36 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/klist.h"
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 void *n_klist;
 struct list_head n_node;
 struct kref n_ref;
};

extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);

extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);

extern int klist_node_attached(struct klist_node *n);


struct klist_iter {
 struct klist *i_klist;
 struct klist_node *i_cur;
};


extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
     struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 1
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/stat.h" 1
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cache.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmod.h" 1
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmod.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 1
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/threads.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/numa.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/seqlock.h" 1
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
# 60 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/seqlock.h"
static inline void write_seqlock(seqlock_t *sl)
{
 spin_lock(&sl->lock);
 ++sl->sequence;
 smp_wmb();
}

static inline void write_sequnlock(seqlock_t *sl)
{
 smp_wmb();
 sl->sequence++;
 spin_unlock(&sl->lock);
}

static inline int write_tryseqlock(seqlock_t *sl)
{
 int ret = spin_trylock(&sl->lock);

 if (ret) {
  ++sl->sequence;
  smp_wmb();
 }
 return ret;
}


static __always_inline unsigned read_seqbegin(const seqlock_t *sl)
{
 unsigned ret;

repeat:
 ret = sl->sequence;
 smp_rmb();
 if (unlikely(ret & 1)) {
  cpu_relax();
  goto repeat;
 }

 return ret;
}






static __always_inline int read_seqretry(const seqlock_t *sl, unsigned start)
{
 smp_rmb();

 return (sl->sequence != start);
}
# 121 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = s->sequence;
 smp_rmb();
 if (unlikely(ret & 1)) {
  cpu_relax();
  goto repeat;
 }
 return ret;
}




static inline int read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 smp_rmb();

 return s->sequence != start;
}






static inline void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 smp_wmb();
}

static inline void write_seqcount_end(seqcount_t *s)
{
 smp_wmb();
 s->sequence++;
}
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h" 1
# 93 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitmap.h" 1







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/string.h" 1






# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 330 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 348 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 349 "/usr/include/sys/cdefs.h" 2 3 4
# 331 "/usr/include/features.h" 2 3 4
# 354 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 355 "/usr/include/features.h" 2 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/i486-slackware-linux/4.3.3/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/i486-slackware-linux/4.3.3/include/stddef.h" 3 4
typedef unsigned int size_t;
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 294 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 331 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 354 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 432 "/usr/include/string.h" 3 4

# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/string.h" 2
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitmap.h" 2
# 90 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern int __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern void bitmap_set(unsigned long *map, int i, int len);
extern void bitmap_clear(unsigned long *map, int start, int nr);
extern unsigned long bitmap_find_next_zero_area(unsigned long *map,
      unsigned long size,
      unsigned long start,
      unsigned int nr,
      unsigned long align_mask);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
  const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);
extern void bitmap_copy_le(void *dst, const unsigned long *src, int nbits);
# 154 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bitmap.h"
static inline void bitmap_zero(unsigned long *dst, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = 0UL;
 else {
  int len = BITS_TO_LONGS(nbits) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = BITS_TO_LONGS(nbits);
 if (!(__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG)) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL );
}

static inline void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = *src;
 else {
  int len = BITS_TO_LONGS(nbits) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline int bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return (*dst = *src1 & *src2) != 0;
 return __bitmap_and(dst, src1, src2, nbits);
}

static inline void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline int bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return (*dst = *src1 & ~(*src2)) != 0;
 return __bitmap_andnot(dst, src1, src2, nbits);
}

static inline void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = ~(*src) & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return ! ((*src1 ^ *src2) & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return ((*src1 & *src2) & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline int bitmap_empty(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return ! (*src & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline int bitmap_full(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return ! (~(*src) & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline int bitmap_weight(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  return hweight_long(*src & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= BITS_PER_LONG))
  *dst = (*src << n) & ( ((nbits) % BITS_PER_LONG) ? (1UL<<((nbits) % BITS_PER_LONG))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 94 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h" 2


typedef struct { DECLARE_BITMAP(bits, (1 << 0)); } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline int __first_node(const nodemask_t *srcp)
{
 return min_t(int, (1 << 0), find_first_bit(srcp->bits, (1 << 0)));
}


static inline int __next_node(int n, const nodemask_t *srcp)
{
 return min_t(int,(1 << 0),find_next_bit(srcp->bits, (1 << 0), n+1));
}

static inline void init_nodemask_of_node(nodemask_t *mask, int node)
{
 __nodes_clear(&(*mask), (1 << 0));
 __node_set((node), &(*mask));
}
# 264 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h"
static inline int __first_unset_node(const nodemask_t *maskp)
{
 return min_t(int,(1 << 0),
   find_first_zero_bit(maskp->bits, (1 << 0)));
}
# 298 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h"
static inline int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
  const nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 372 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h"
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,

 N_CPU,
 NR_NODE_STATES
};






extern nodemask_t node_states[NR_NODE_STATES];
# 435 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h"
static inline int node_state(int node, enum node_states state)
{
 return node == 0;
}

static inline void node_set_state(int node, enum node_states state)
{
}

static inline void node_clear_state(int node, enum node_states state)
{
}

static inline int num_node_state(enum node_states state)
{
 return 1;
}
# 491 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/nodemask.h"
struct nodemask_scratch {
 nodemask_t mask1;
 nodemask_t mask2;
};
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pageblock-flags.h" 1
# 29 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pageblock-flags.h"
enum pageblock_bits {
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,

 NR_PAGEBLOCK_BITS
};
# 60 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pageblock-flags.h"
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/generated/bounds.h" 1
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page.h" 1
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page-nommu.h" 1
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page-nommu.h"
typedef unsigned long pte_t;
typedef unsigned long pmd_t;
typedef unsigned long pgd_t[2];
typedef unsigned long pgprot_t;
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page.h" 2
# 196 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page.h"
typedef struct page *pgtable_t;


extern int pfn_valid(unsigned long);







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h" 1
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/const.h" 1
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h" 2
# 1 "./include/mach/memory.h" 1
# 60 "./include/mach/memory.h"
void *alloc_bootmem_aligned(unsigned long size, unsigned long alignment);
void clean_and_invalidate_caches(unsigned long, unsigned long, unsigned long);
void clean_caches(unsigned long, unsigned long, unsigned long);
void invalidate_caches(unsigned long, unsigned long, unsigned long);
int platform_physical_remove_pages(unsigned long, unsigned long);
int platform_physical_active_pages(unsigned long, unsigned long);
int platform_physical_low_power_pages(unsigned long, unsigned long);
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/sizes.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h" 2
# 184 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h"
static inline unsigned long virt_to_phys(const void *x)
{
 return (((unsigned long)(x)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
}

static inline void *phys_to_virt(unsigned long x)
{
 return (void *)((((unsigned long)(x)) - (CONFIG_PHYS_OFFSETUL) + ((CONFIG_PHYS_OFFSETUL))));
}
# 214 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h"
static inline __deprecated unsigned long virt_to_bus(void *x)
{
 return (((unsigned long)x) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
}

static inline __deprecated void *bus_to_virt(unsigned long x)
{
 return (void *)((x) - (CONFIG_PHYS_OFFSETUL) + ((CONFIG_PHYS_OFFSETUL)));
}
# 326 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/memory_model.h" 1
# 327 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/memory.h" 2
# 208 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page.h" 2







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/getorder.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/getorder.h"
static inline int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 216 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/page.h" 2
# 21 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2
# 50 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
extern int page_group_by_mobility_disabled;

static inline int get_pageblock_migratetype(struct page *page)
{
 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
# 79 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
enum zone_stat_item {

 NR_FREE_PAGES,
 NR_LRU_BASE,
 NR_INACTIVE_ANON = NR_LRU_BASE,
 NR_ACTIVE_ANON,
 NR_INACTIVE_FILE,
 NR_ACTIVE_FILE,
 NR_UNEVICTABLE,
 NR_MLOCK,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_KERNEL_STACK,

 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_WRITEBACK_TEMP,
 NR_ISOLATED_ANON,
 NR_ISOLATED_FILE,
 NR_SHMEM,
# 115 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };
# 130 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
enum lru_list {
 LRU_INACTIVE_ANON = 0,
 LRU_ACTIVE_ANON = 0 + 1,
 LRU_INACTIVE_FILE = 0 + 2,
 LRU_ACTIVE_FILE = 0 + 2 + 1,
 LRU_UNEVICTABLE,
 NR_LRU_LISTS
};





static inline int is_file_lru(enum lru_list l)
{
 return (l == LRU_INACTIVE_FILE || l == LRU_ACTIVE_FILE);
}

static inline int is_active_lru(enum lru_list l)
{
 return (l == LRU_ACTIVE_ANON || l == LRU_ACTIVE_FILE);
}

static inline int is_unevictable_lru(enum lru_list l)
{
 return (l == LRU_UNEVICTABLE);
}

enum zone_watermarks {
 WMARK_MIN,
 WMARK_LOW,
 WMARK_HIGH,
 NR_WMARK
};





struct per_cpu_pages {
 int count;
 int high;
 int batch;


 struct list_head lists[3];
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;







};



enum zone_type {
# 226 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 ZONE_NORMAL,
# 238 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};
# 262 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
struct zone_reclaim_stat {
# 271 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 unsigned long recent_rotated[2];
 unsigned long recent_scanned[2];




 unsigned long nr_saved_scan[NR_LRU_LISTS];
};

struct zone {



 unsigned long watermark[NR_WMARK];






 unsigned long percpu_drift_mark;
# 301 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 unsigned long lowmem_reserve[2];
# 311 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 struct per_cpu_pageset *pageset;



 spinlock_t lock;
 int all_unreclaimable;




 struct free_area free_area[11];






 unsigned long *pageblock_flags;
# 341 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"



 spinlock_t lru_lock;
 struct zone_lru {
  struct list_head list;
 } lru[NR_LRU_LISTS];

 struct zone_reclaim_stat reclaim_stat;

 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 370 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 int prev_priority;





 unsigned int inactive_ratio;



# 406 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 427 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 const char *name;
} ;

typedef enum {
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
} zone_flags_t;

static inline void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline int zone_is_reclaim_locked(const struct zone *zone)
{
 return test_bit(ZONE_RECLAIM_LOCKED, &zone->flags);
}

static inline int zone_is_oom_locked(const struct zone *zone)
{
 return test_bit(ZONE_OOM_LOCKED, &zone->flags);
}
# 560 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
struct zonelist_cache;






struct zoneref {
 struct zone *zone;
 int zone_idx;
};
# 589 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 0) * 2) + 1];



};
# 607 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
extern struct page *mem_map;
# 621 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[2];
 struct zonelist node_zonelists[1];
 int nr_zones;







 struct bootmem_data *bdata;
# 645 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 664 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/memory_hotplug.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/memory_hotplug.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mutex.h" 1
# 48 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mutex.h"
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
# 63 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mutex.h"
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;



};
# 107 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mutex.h"
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline int mutex_is_locked(struct mutex *lock)
{
 return atomic_read(&lock->count) != 1;
}
# 136 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mutex.h"
extern void mutex_lock(struct mutex *lock);
extern int __must_check mutex_lock_interruptible(struct mutex *lock);
extern int __must_check mutex_lock_killable(struct mutex *lock);
# 151 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mutex.h"
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
extern int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock);
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwsem.h" 1
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwsem.h"
struct rw_semaphore;




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/rwsem.h" 1
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rwsem.h" 2





extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/srcu.h" 1
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/srcu.h"
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;



};
# 70 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/srcu.h"
int init_srcu_struct(struct srcu_struct *sp);






void cleanup_srcu_struct(struct srcu_struct *sp);
int __srcu_read_lock(struct srcu_struct *sp) ;
void __srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
void synchronize_srcu_expedited(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
# 103 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/srcu.h"
static inline int srcu_read_lock_held(struct srcu_struct *sp)
{
 return 1;
}
# 125 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/srcu.h"
static inline int srcu_read_lock(struct srcu_struct *sp)
{
 int retval = __srcu_read_lock(sp);

 do { } while (0);
 return retval;
}
# 140 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/srcu.h"
static inline void srcu_read_unlock(struct srcu_struct *sp, int idx)

{
 do { } while (0);
 __srcu_read_unlock(sp, idx);
}
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h" 2
# 50 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
# 89 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/notifier.h"
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
# 7 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
struct mem_section;

extern unsigned long movable_reserved_start, movable_reserved_size;
extern unsigned long low_power_memory_start, low_power_memory_size;
# 167 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/memory_hotplug.h"
static inline void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline void zone_span_writelock(struct zone *zone) {}
static inline void zone_span_writeunlock(struct zone *zone) {}
static inline void zone_seqlock_init(struct zone *zone) {}

static inline int mhp_notimplemented(const char *func)
{
 printk(KERN_WARNING "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}

static inline void register_page_bootmem_info_node(struct pglist_data *pgdat)
{
}
# 201 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/memory_hotplug.h"
static inline int is_mem_section_removable(unsigned long pfn,
     unsigned long nr_pages)
{
 return 0;
}


extern int mem_online_node(int nid);
extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);

extern void reserve_hotplug_pages(unsigned long start_pfn,
    unsigned long nr_pages);
extern void unreserve_hotplug_pages(unsigned long start_pfn,
    unsigned long nr_pages);

extern int physical_remove_memory(u64 start, u64 size);
extern int arch_physical_remove_memory(u64 start, u64 size);
extern int physical_low_power_memory(u64 start, u64 size);
extern int arch_physical_low_power_memory(u64 start, u64 size);
extern int physical_active_memory(u64 start, u64 size);
extern int arch_physical_active_memory(u64 start, u64 size);
# 665 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h" 2

extern struct mutex zonelists_mutex;
void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void *data);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);




static inline void memory_present(int nid, unsigned long start, unsigned long end) {}





static inline int local_memory_node(int node_id) { return node_id; };
# 702 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
static inline int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

extern int movable_zone;

static inline int zone_movable_is_highmem(void)
{



 return 0;

}

static inline int is_highmem_idx(enum zone_type idx)
{




 return 0;

}

static inline int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline int is_highmem(struct zone *zone)
{






 return 0;

}

static inline int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline int is_dma32(struct zone *zone)
{



 return 0;

}

static inline int is_dma(struct zone *zone)
{



 return 0;

}


struct ctl_table;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[2 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
extern char numa_zonelist_order[];




extern struct pglist_data contig_page_data;
# 805 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 837 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
static inline struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline int zonelist_node_idx(struct zoneref *zoneref)
{




 return 0;

}
# 870 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
# 887 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
static inline struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
# 930 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
static inline unsigned long early_pfn_to_nid(unsigned long pfn)
{
 return 0;
}
# 1114 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) notrace node_memmap_size_bytes(int, unsigned long, unsigned long);
# 1148 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmzone.h"
static inline int memmap_valid_within(unsigned long pfn,
     struct page *page, struct zone *zone)
{
 return 1;
}
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h" 1
# 30 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
typedef struct cpumask { DECLARE_BITMAP(bits, 1); } cpumask_t;
# 78 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
extern const struct cpumask *const cpu_possible_mask;
extern const struct cpumask *const cpu_online_mask;
extern const struct cpumask *const cpu_present_mask;
extern const struct cpumask *const cpu_active_mask;
# 104 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline unsigned int cpumask_check(unsigned int cpu)
{



 return cpu;
}



static inline unsigned int cpumask_first(const struct cpumask *srcp)
{
 return 0;
}


static inline unsigned int cpumask_next(int n, const struct cpumask *srcp)
{
 return n+1;
}

static inline unsigned int cpumask_next_zero(int n, const struct cpumask *srcp)
{
 return n+1;
}

static inline unsigned int cpumask_next_and(int n,
         const struct cpumask *srcp,
         const struct cpumask *andp)
{
 return n+1;
}


static inline unsigned int cpumask_any_but(const struct cpumask *mask,
        unsigned int cpu)
{
 return 1;
}
# 254 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline void cpumask_set_cpu(unsigned int cpu, struct cpumask *dstp)
{
 set_bit(cpumask_check(cpu), ((dstp)->bits));
}






static inline void cpumask_clear_cpu(int cpu, struct cpumask *dstp)
{
 clear_bit(cpumask_check(cpu), ((dstp)->bits));
}
# 286 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int cpumask_test_and_set_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_set_bit(cpumask_check(cpu), ((cpumask)->bits));
}
# 298 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int cpumask_test_and_clear_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_clear_bit(cpumask_check(cpu), ((cpumask)->bits));
}





static inline void cpumask_setall(struct cpumask *dstp)
{
 bitmap_fill(((dstp)->bits), 1);
}





static inline void cpumask_clear(struct cpumask *dstp)
{
 bitmap_zero(((dstp)->bits), 1);
}







static inline int cpumask_and(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 return bitmap_and(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 1);
}







static inline void cpumask_or(struct cpumask *dstp, const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 bitmap_or(((dstp)->bits), ((src1p)->bits),
          ((src2p)->bits), 1);
}







static inline void cpumask_xor(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 bitmap_xor(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 1);
}







static inline int cpumask_andnot(struct cpumask *dstp,
      const struct cpumask *src1p,
      const struct cpumask *src2p)
{
 return bitmap_andnot(((dstp)->bits), ((src1p)->bits),
       ((src2p)->bits), 1);
}






static inline void cpumask_complement(struct cpumask *dstp,
          const struct cpumask *srcp)
{
 bitmap_complement(((dstp)->bits), ((srcp)->bits),
           1);
}






static inline bool cpumask_equal(const struct cpumask *src1p,
    const struct cpumask *src2p)
{
 return bitmap_equal(((src1p)->bits), ((src2p)->bits),
       1);
}






static inline bool cpumask_intersects(const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 return bitmap_intersects(((src1p)->bits), ((src2p)->bits),
            1);
}






static inline int cpumask_subset(const struct cpumask *src1p,
     const struct cpumask *src2p)
{
 return bitmap_subset(((src1p)->bits), ((src2p)->bits),
        1);
}





static inline bool cpumask_empty(const struct cpumask *srcp)
{
 return bitmap_empty(((srcp)->bits), 1);
}





static inline bool cpumask_full(const struct cpumask *srcp)
{
 return bitmap_full(((srcp)->bits), 1);
}





static inline unsigned int cpumask_weight(const struct cpumask *srcp)
{
 return bitmap_weight(((srcp)->bits), 1);
}







static inline void cpumask_shift_right(struct cpumask *dstp,
           const struct cpumask *srcp, int n)
{
 bitmap_shift_right(((dstp)->bits), ((srcp)->bits), n,
            1);
}







static inline void cpumask_shift_left(struct cpumask *dstp,
          const struct cpumask *srcp, int n)
{
 bitmap_shift_left(((dstp)->bits), ((srcp)->bits), n,
           1);
}






static inline void cpumask_copy(struct cpumask *dstp,
    const struct cpumask *srcp)
{
 bitmap_copy(((dstp)->bits), ((srcp)->bits), 1);
}
# 529 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int cpumask_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnprintf(buf, len, ((srcp)->bits), 1);
}
# 543 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int cpumask_parse_user(const char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parse_user(buf, len, ((dstp)->bits), 1);
}
# 558 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int cpulist_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnlistprintf(buf, len, ((srcp)->bits),
        1);
}
# 573 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int cpulist_parse(const char *buf, struct cpumask *dstp)
{
 return bitmap_parselist(buf, ((dstp)->bits), 1);
}






static inline size_t cpumask_size(void)
{


 return BITS_TO_LONGS(1) * sizeof(long);
}
# 618 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
typedef struct cpumask cpumask_var_t[1];

static inline bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 return true;
}

static inline bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 return true;
}

static inline bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 cpumask_clear(*mask);
 return true;
}

static inline bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 cpumask_clear(*mask);
 return true;
}

static inline void alloc_bootmem_cpumask_var(cpumask_var_t *mask)
{
}

static inline void free_cpumask_var(cpumask_var_t mask)
{
}

static inline void free_bootmem_cpumask_var(cpumask_var_t mask)
{
}




extern const DECLARE_BITMAP(cpu_all_bits, 1);
# 670 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
void set_cpu_possible(unsigned int cpu, bool possible);
void set_cpu_present(unsigned int cpu, bool present);
void set_cpu_online(unsigned int cpu, bool online);
void set_cpu_active(unsigned int cpu, bool active);
void init_cpu_present(const struct cpumask *src);
void init_cpu_possible(const struct cpumask *src);
void init_cpu_online(const struct cpumask *src);
# 692 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline int __check_is_bitmap(const unsigned long *bitmap)
{
 return 1;
}
# 704 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
extern const unsigned long
 cpu_bit_bitmap[BITS_PER_LONG+1][BITS_TO_LONGS(1)];

static inline const struct cpumask *get_cpu_mask(unsigned int cpu)
{
 const unsigned long *p = cpu_bit_bitmap[1 + cpu % BITS_PER_LONG];
 p -= cpu / BITS_PER_LONG;
 return ((struct cpumask *)(1 ? (p) : (void *)sizeof(__check_is_bitmap(p))));
}
# 811 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpumask.h"
static inline void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline int __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline int __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 31 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/smp.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/smp.h"
extern void cpu_idle(void);

struct call_single_data {
 struct list_head list;
 void (*func) (void *info);
 void *info;
 u16 flags;
 u16 priv;
};


extern unsigned int total_cpus;

int smp_call_function_single(int cpuid, void (*func) (void *info), void *info,
    int wait);
# 119 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/smp.h"
static inline void smp_send_stop(void) { }





static inline int up_smp_call_function(void (*func)(void *), void *info)
{
 return 0;
}
# 138 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/smp.h"
static inline void smp_send_reschedule(int cpu) { }




static inline void init_call_single_data(void) { }

static inline int
smp_call_function_any(const struct cpumask *mask, void (*func)(void *info),
        void *info, int wait)
{
 return smp_call_function_single(0, func, info, wait);
}
# 183 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/smp.h"
extern void arch_disable_smp_support(void);

void smp_setup_processor_id(void);
# 34 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/percpu.h" 1






# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pfn.h" 1
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/percpu.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/percpu.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/percpu.h" 1





# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/percpu-defs.h" 1
# 7 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/percpu.h" 2
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/percpu.h" 2
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/percpu.h" 2
# 149 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/percpu.h"
static inline bool is_kernel_percpu_address(unsigned long addr)
{
 return false;
}

static inline void __attribute__ ((__section__(".init.text"))) notrace setup_per_cpu_areas(void) { }

static inline void *pcpu_lpage_remapped(void *kaddr)
{
 return ((void *)0);
}



extern void *__alloc_percpu(size_t size, size_t align);
extern void free_percpu(void *__pdata);
extern phys_addr_t per_cpu_ptr_to_phys(void *addr);
# 229 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/percpu.h"
extern void __bad_size_call_parameter(void);
# 35 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/topology.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/topology.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/topology.h" 2
# 36 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h" 2
# 49 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h"
int arch_update_cpu_topology(void);
# 246 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h"
static inline int numa_node_id(void)
{
 return ((void)(0),0);
}
# 294 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/topology.h"
static inline void set_numa_mem(int node) {}

static inline void set_cpu_numa_mem(int cpu, int node) {}



static inline int numa_mem_id(void)
{
 return numa_node_id();
}
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmdebug.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h" 2

struct vm_area_struct;
# 121 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h"
static inline int allocflags_to_migratetype(gfp_t gfp_flags)
{
 WARN_ON((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x08u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x08u)));

 if (unlikely(page_group_by_mobility_disabled))
  return 0;


 return (((gfp_flags & (( gfp_t)0x08u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}
# 216 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h"
static inline enum zone_type gfp_zone(gfp_t flags)
{
 enum zone_type z;
 int bit = flags & ((( gfp_t)0x01u)|(( gfp_t)0x02u)|(( gfp_t)0x04u)|(( gfp_t)0x08u));

 z = (( (ZONE_NORMAL << 0 * 1) | (ZONE_NORMAL << (( gfp_t)0x01u) * 1) | (ZONE_NORMAL << (( gfp_t)0x02u) * 1) | (ZONE_NORMAL << (( gfp_t)0x04u) * 1) | (ZONE_NORMAL << (( gfp_t)0x08u) * 1) | (ZONE_NORMAL << ((( gfp_t)0x08u) | (( gfp_t)0x01u)) * 1) | (ZONE_MOVABLE << ((( gfp_t)0x08u) | (( gfp_t)0x02u)) * 1) | (ZONE_NORMAL << ((( gfp_t)0x08u) | (( gfp_t)0x04u)) * 1)) >> (bit * 1)) &
      ((1 << 1) - 1);

 if (__builtin_constant_p(bit))
  ((void)sizeof(char[1 - 2 * !!((( 1 << ((( gfp_t)0x01u) | (( gfp_t)0x02u)) | 1 << ((( gfp_t)0x01u) | (( gfp_t)0x04u)) | 1 << ((( gfp_t)0x04u) | (( gfp_t)0x02u)) | 1 << ((( gfp_t)0x01u) | (( gfp_t)0x04u) | (( gfp_t)0x02u)) | 1 << ((( gfp_t)0x08u) | (( gfp_t)0x02u) | (( gfp_t)0x01u)) | 1 << ((( gfp_t)0x08u) | (( gfp_t)0x04u) | (( gfp_t)0x01u)) | 1 << ((( gfp_t)0x08u) | (( gfp_t)0x04u) | (( gfp_t)0x02u)) | 1 << ((( gfp_t)0x08u) | (( gfp_t)0x04u) | (( gfp_t)0x01u) | (( gfp_t)0x02u))) >> bit) & 1)]));
 else {



 }
 return z;
}
# 241 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h"
static inline int gfp_zonelist(gfp_t flags)
{
 if (0 && unlikely(flags & (( gfp_t)0x40000u)))
  return 1;

 return 0;
}
# 258 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h"
static inline struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (&contig_page_data)->node_zonelists + gfp_zonelist(flags);
}


static inline void arch_free_page(struct page *page, int order) { }


static inline void arch_alloc_page(struct page *page, int order) { }


struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
         struct zonelist *zonelist, nodemask_t *nodemask);

static inline struct page *
__alloc_pages(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist)
{
 return __alloc_pages_nodemask(gfp_mask, order, zonelist, ((void *)0));
}

static inline struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{

 if (nid < 0)
  nid = numa_node_id();

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}

static inline struct page *alloc_pages_exact_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 do { } while (0);

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}
# 316 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);

void *alloc_pages_exact(size_t size, gfp_t gfp_mask);
void free_pages_exact(void *virt, size_t size);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_cold_page(struct page *page, int cold);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);

extern gfp_t gfp_allowed_mask;

extern void set_gfp_allowed_mask(gfp_t mask);
extern gfp_t clear_gfp_allowed_mask(gfp_t mask);
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmod.h" 2



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/workqueue.h" 1







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h" 1
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/time.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/time.h"
struct timespec {
 __kernel_time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 __kernel_time_t tv_sec;
 __kernel_suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 258 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/math64.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/div64.h" 1
# 63 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/div64.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/bug.h" 1
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/bug.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/bug.h" 1
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/bug.h" 2
# 64 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/div64.h" 2
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/math64.h" 2
# 66 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/math64.h"
static inline u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static __inline __attribute__ ((__always_inline__)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h" 2



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timex.h" 1
# 64 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timex.h"
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/param.h" 1
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h" 2
# 81 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h"
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long volatile __attribute__((section(".data"))) jiffies;


u64 get_jiffies_64(void);
# 183 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h"
extern unsigned long preset_lpj;
# 296 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/jiffies.h"
extern unsigned int jiffies_to_msecs(const unsigned long j);
extern unsigned int jiffies_to_usecs(const unsigned long j);
extern unsigned long msecs_to_jiffies(const unsigned int m);
extern unsigned long usecs_to_jiffies(const unsigned int u);
extern unsigned long timespec_to_jiffies(const struct timespec *value);
extern void jiffies_to_timespec(const unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies(const struct timeval *value);
extern void jiffies_to_timeval(const unsigned long jiffies,
          struct timeval *value);
extern clock_t jiffies_to_clock_t(long x);
extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
extern unsigned long nsecs_to_jiffies(u64 n);
# 26 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h" 2
# 46 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
union ktime {
 s64 tv64;

 struct {



 s32 nsec, sec;

 } tv;

};

typedef union ktime ktime_t;
# 151 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
static inline ktime_t ktime_set(const long secs, const unsigned long nsecs)
{
 return (ktime_t) { .tv = { .sec = secs, .nsec = nsecs } };
}
# 163 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
static inline ktime_t ktime_sub(const ktime_t lhs, const ktime_t rhs)
{
 ktime_t res;

 res.tv64 = lhs.tv64 - rhs.tv64;
 if (res.tv.nsec < 0)
  res.tv.nsec += NSEC_PER_SEC;

 return res;
}
# 181 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
static inline ktime_t ktime_add(const ktime_t add1, const ktime_t add2)
{
 ktime_t res;

 res.tv64 = add1.tv64 + add2.tv64;
# 194 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
 if (res.tv.nsec >= NSEC_PER_SEC)
  res.tv64 += (u32)-NSEC_PER_SEC;

 return res;
}
# 207 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
extern ktime_t ktime_add_ns(const ktime_t kt, u64 nsec);
# 216 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
extern ktime_t ktime_sub_ns(const ktime_t kt, u64 nsec);







static inline ktime_t timespec_to_ktime(const struct timespec ts)
{
 return (ktime_t) { .tv = { .sec = (s32)ts.tv_sec,
          .nsec = (s32)ts.tv_nsec } };
}







static inline ktime_t timeval_to_ktime(const struct timeval tv)
{
 return (ktime_t) { .tv = { .sec = (s32)tv.tv_sec,
       .nsec = (s32)tv.tv_usec * 1000 } };
}







static inline struct timespec ktime_to_timespec(const ktime_t kt)
{
 return (struct timespec) { .tv_sec = (time_t) kt.tv.sec,
       .tv_nsec = (long) kt.tv.nsec };
}







static inline struct timeval ktime_to_timeval(const ktime_t kt)
{
 return (struct timeval) {
  .tv_sec = (time_t) kt.tv.sec,
  .tv_usec = (suseconds_t) (kt.tv.nsec / NSEC_PER_USEC) };
}







static inline s64 ktime_to_ns(const ktime_t kt)
{
 return (s64) kt.tv.sec * NSEC_PER_SEC + kt.tv.nsec;
}
# 287 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
static inline int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}

static inline s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ktime_to_timeval(kt);
 return (s64) tv.tv_sec * USEC_PER_SEC + tv.tv_usec;
}

static inline s64 ktime_to_ms(const ktime_t kt)
{
 struct timeval tv = ktime_to_timeval(kt);
 return (s64) tv.tv_sec * MSEC_PER_SEC + tv.tv_usec / USEC_PER_MSEC;
}

static inline s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(ktime_sub(later, earlier));
}

static inline ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ktime_add_ns(kt, usec * 1000);
}

static inline ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ktime_sub_ns(kt, usec * 1000);
}

extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
# 331 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);




static inline ktime_t ns_to_ktime(u64 ns)
{
 static const ktime_t ktime_zero = { .tv64 = 0 };
 return ktime_add_ns(ktime_zero, ns);
}
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/debugobjects.h" 1






enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
# 27 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/debugobjects.h"
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 unsigned int astate;
 void *object;
 struct debug_obj_descr *descr;
};
# 47 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/debugobjects.h"
struct debug_obj_descr {
 const char *name;

 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
};
# 77 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/debugobjects.h"
static inline void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_activate (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }

static inline void debug_objects_early_init(void) { }
static inline void debug_objects_mem_init(void) { }





static inline void
debug_check_no_obj_freed(const void *address, unsigned long size) { }
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h" 2


struct tvec_base;

struct timer_list {




 struct list_head entry;
 unsigned long expires;
 struct tvec_base *base;

 void (*function)(unsigned long);
 unsigned long data;

 int slack;
# 34 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
};

extern struct tvec_base boot_tvec_bases;
# 65 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
void init_timer_key(struct timer_list *timer,
      const char *name,
      struct lock_class_key *key);
void init_timer_deferrable_key(struct timer_list *timer,
          const char *name,
          struct lock_class_key *key);
# 122 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
static inline void destroy_timer_on_stack(struct timer_list *timer) { }
static inline void init_timer_on_stack_key(struct timer_list *timer,
        const char *name,
        struct lock_class_key *key)
{
 init_timer_key(timer, name, key);
}


static inline void setup_timer_key(struct timer_list * timer,
    const char *name,
    struct lock_class_key *key,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_key(timer, name, key);
}

static inline void setup_timer_on_stack_key(struct timer_list *timer,
     const char *name,
     struct lock_class_key *key,
     void (*function)(unsigned long),
     unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_on_stack_key(timer, name, key);
}
# 163 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
static inline int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pending(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pinned(struct timer_list *timer, unsigned long expires);

extern void set_timer_slack(struct timer_list *time, int slack_hz);
# 189 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
extern unsigned long get_next_timer_interrupt(unsigned long now);
# 221 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
static inline void init_timer_stats(void)
{
}

static inline void timer_stats_timer_set_start_info(struct timer_list *timer)
{
}

static inline void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
}


extern void add_timer(struct timer_list *timer);
# 246 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);

unsigned long __round_jiffies_up(unsigned long j, int cpu);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu);
unsigned long round_jiffies_up(unsigned long j);
unsigned long round_jiffies_up_relative(unsigned long j);
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/workqueue.h" 2





struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







struct work_struct {
 atomic_long_t data;




 struct list_head entry;
 work_func_t func;



};




struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

static inline struct delayed_work *to_delayed_work(struct work_struct *work)
{
 return container_of(work, struct delayed_work, work);
}

struct execute_work {
 struct work_struct work;
};
# 100 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/workqueue.h"
static inline void __init_work(struct work_struct *work, int onstack) { }
static inline void destroy_work_on_stack(struct work_struct *work) { }
# 183 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/workqueue.h"
extern struct workqueue_struct *
__create_workqueue_key(const char *name, int singlethread,
         int freezeable, int rt, struct lock_class_key *key,
         const char *lock_name);
# 214 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/workqueue.h"
extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_work_on(int cpu, struct workqueue_struct *wq,
   struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);
extern void flush_delayed_work(struct delayed_work *work);

extern int schedule_work(struct work_struct *work);
extern int schedule_work_on(int cpu, struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);

extern int flush_work(struct work_struct *work);

extern int cancel_work_sync(struct work_struct *work);







static inline int cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}






static inline int __cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(0, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}

extern int cancel_delayed_work_sync(struct delayed_work *work);


static inline
void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
     struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline
void cancel_rearming_delayed_work(struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline long work_on_cpu(unsigned int cpu, long (*fn)(void *), void *arg)
{
 return fn(arg);
}
# 27 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmod.h" 2
# 41 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmod.h"
static inline int request_module(const char *name, ...) { return -38; }
static inline int request_module_nowait(const char *name, ...) { return -38; }




struct key;
struct file;

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};

struct subprocess_info {
 struct work_struct work;
 struct completion *complete;
 char *path;
 char **argv;
 char **envp;
 enum umh_wait wait;
 int retval;
 int (*init)(struct subprocess_info *info);
 void (*cleanup)(struct subprocess_info *info);
 void *data;
};


struct subprocess_info *call_usermodehelper_setup(char *path, char **argv,
        char **envp, gfp_t gfp_mask);


void call_usermodehelper_setfns(struct subprocess_info *info,
      int (*init)(struct subprocess_info *info),
      void (*cleanup)(struct subprocess_info *info),
      void *data);


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline int
call_usermodehelper_fns(char *path, char **argv, char **envp,
   enum umh_wait wait,
   int (*init)(struct subprocess_info *info),
   void (*cleanup)(struct subprocess_info *), void *data)
{
 struct subprocess_info *info;
 gfp_t gfp_mask = (wait == UMH_NO_WAIT) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));

 info = call_usermodehelper_setup(path, argv, envp, gfp_mask);

 if (info == ((void *)0))
  return -12;

 call_usermodehelper_setfns(info, init, cleanup, data);

 return call_usermodehelper_exec(info, wait);
}

static inline int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 return call_usermodehelper_fns(path, argv, envp, wait,
           ((void *)0), ((void *)0), ((void *)0));
}

extern void usermodehelper_init(void);

extern int usermodehelper_disable(void);
extern void usermodehelper_enable(void);
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf-em.h" 1
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h" 2




struct file;
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 149 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 172 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 311 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h"
typedef struct elf32_shdr {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 401 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h" 1
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);




struct kernel_param {
 const char *name;
 u16 perm;
 u16 flags;
 param_set_fn set;
 param_get_fn get;
 union {
  void *arg;
  const struct kparam_string *str;
  const struct kparam_array *arr;
 };
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 143 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));





static inline void destroy_params(const struct kernel_param *params,
      unsigned num)
{
}
# 165 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h"
extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);



extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);
# 208 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h"
extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 226 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;
# 243 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/moduleparam.h"
static inline int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params)
{
 return 0;
}

static inline void module_param_sysfs_remove(struct module *mod)
{ }
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/tracepoint.h" 1
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/tracepoint.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h" 1
# 42 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/completion.h" 1
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 73 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/completion.h"
static inline void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern void wait_for_completion_io(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_interruptible_timeout(
   struct completion *x, unsigned long timeout);
extern unsigned long wait_for_completion_killable_timeout(
   struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 43 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h" 2
# 53 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


extern void rcu_barrier(void);
extern void rcu_barrier_bh(void);
extern void rcu_barrier_sched(void);
extern void synchronize_sched_expedited(void);
extern int sched_expedited_torture_stats(char *page);


extern void rcu_init(void);
# 82 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
static inline void init_rcu_head_on_stack(struct rcu_head *head)
{
}

static inline void destroy_rcu_head_on_stack(struct rcu_head *head)
{
}
# 174 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
static inline int rcu_read_lock_held(void)
{
 return 1;
}

static inline int rcu_read_lock_bh_held(void)
{
 return 1;
}







static inline int rcu_read_lock_sched_held(void)
{
 return 1;
}
# 310 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
static inline void rcu_read_lock(void)
{
 __rcu_read_lock();
 (void)0;
 do { } while (0);
}
# 332 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
static inline void rcu_read_unlock(void)
{
 do { } while (0);
 (void)0;
 __rcu_read_unlock();
}
# 350 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
static inline void rcu_read_lock_bh(void)
{
 __rcu_read_lock_bh();
 (void)0;
 do { } while (0);
}






static inline void rcu_read_unlock_bh(void)
{
 do { } while (0);
 (void)0;
 __rcu_read_unlock_bh();
}
# 378 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
static inline void rcu_read_lock_sched(void)
{
 do { } while (0);
 (void)0;
 do { } while (0);
}


static inline notrace void rcu_read_lock_sched_notrace(void)
{
 do { } while (0);
 (void)0;
}






static inline void rcu_read_unlock_sched(void)
{
 do { } while (0);
 (void)0;
 do { } while (0);
}


static inline notrace void rcu_read_unlock_sched_notrace(void)
{
 (void)0;
 do { } while (0);
}
# 478 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
struct rcu_synchronize {
 struct rcu_head head;
 struct completion completion;
};

extern void wakeme_after_rcu(struct rcu_head *head);
# 496 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
extern void call_rcu(struct rcu_head *head,
         void (*func)(struct rcu_head *head));
# 517 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rcupdate.h"
extern void call_rcu_bh(struct rcu_head *head,
   void (*func)(struct rcu_head *head));
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/tracepoint.h" 2

struct module;
struct tracepoint;

struct tracepoint_func {
 void *func;
 void *data;
};

struct tracepoint {
 const char *name;
 int state;
 void (*regfunc)(void);
 void (*unregfunc)(void);
 struct tracepoint_func *funcs;
} __attribute__((aligned(32)));
# 46 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/tracepoint.h"
extern int tracepoint_probe_register(const char *name, void *probe, void *data);





extern int
tracepoint_probe_unregister(const char *name, void *probe, void *data);

extern int tracepoint_probe_register_noupdate(const char *name, void *probe,
           void *data);
extern int tracepoint_probe_unregister_noupdate(const char *name, void *probe,
      void *data);
extern void tracepoint_probe_update_all(void);

struct tracepoint_iter {
 struct module *module;
 struct tracepoint *tracepoint;
};

extern void tracepoint_iter_start(struct tracepoint_iter *iter);
extern void tracepoint_iter_next(struct tracepoint_iter *iter);
extern void tracepoint_iter_stop(struct tracepoint_iter *iter);
extern void tracepoint_iter_reset(struct tracepoint_iter *iter);
extern int tracepoint_get_iter_range(struct tracepoint **tracepoint,
 struct tracepoint *begin, struct tracepoint *end);






static inline void tracepoint_synchronize_unregister(void)
{
 synchronize_sched();
}







static inline void tracepoint_update_probe_range(struct tracepoint *begin,
 struct tracepoint *end)
{ }
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/module.h" 1







struct unwind_table;

struct mod_arch_specific
{
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/module.h"
};
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/trace/events/module.h" 1






# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/tracepoint.h" 1
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/trace/events/module.h" 2
# 121 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/trace/events/module.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/trace/define_trace.h" 1
# 122 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/trace/events/module.h" 2
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h" 2
# 37 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
 struct module_param_attrs *mp;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);
void trim_init_extable(struct module *m);
# 172 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;
# 556 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h"
static inline const struct exception_table_entry *
search_module_extables(unsigned long addr)
{
 return ((void *)0);
}

static inline struct module *__module_address(unsigned long addr)
{
 return ((void *)0);
}

static inline struct module *__module_text_address(unsigned long addr)
{
 return ((void *)0);
}

static inline bool is_module_address(unsigned long addr)
{
 return false;
}

static inline bool is_module_percpu_address(unsigned long addr)
{
 return false;
}

static inline bool is_module_text_address(unsigned long addr)
{
 return false;
}






static inline void __module_get(struct module *module)
{
}

static inline int try_module_get(struct module *module)
{
 return 1;
}

static inline void module_put(struct module *module)
{
}




static inline const char *module_address_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname,
       char *namebuf)
{
 return ((void *)0);
}

static inline int lookup_module_symbol_name(unsigned long addr, char *symname)
{
 return -34;
}

static inline int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name)
{
 return -34;
}

static inline int module_get_kallsym(unsigned int symnum, unsigned long *value,
     char *type, char *name,
     char *module_name, int *exported)
{
 return -34;
}

static inline unsigned long module_kallsyms_lookup_name(const char *name)
{
 return 0;
}

static inline int module_kallsyms_on_each_symbol(int (*fn)(void *, const char *,
          struct module *,
          unsigned long),
       void *data)
{
 return 0;
}

static inline int register_module_notifier(struct notifier_block * nb)
{

 return 0;
}

static inline int unregister_module_notifier(struct notifier_block * nb)
{
 return 0;
}



static inline void print_modules(void)
{
}

static inline void module_update_tracepoints(void)
{
}

static inline int module_get_iter_tracepoints(struct tracepoint_iter *iter)
{
 return 0;
}
# 695 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/module.h"
static inline int module_bug_finalize(const Elf32_Ehdr *hdr,
     const Elf32_Shdr *sechdrs,
     struct module *mod)
{
 return 0;
}
static inline void module_bug_cleanup(struct module *mod) {}
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h" 1
# 34 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
extern void (*pm_idle)(void);
extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);





struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 198 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
struct dev_pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
 int (*runtime_suspend)(struct device *dev);
 int (*runtime_resume)(struct device *dev);
 int (*runtime_idle)(struct device *dev);
};
# 392 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
enum dpm_state {
 DPM_INVALID,
 DPM_ON,
 DPM_PREPARING,
 DPM_RESUMING,
 DPM_SUSPENDING,
 DPM_OFF,
 DPM_OFF_IRQ,
};
# 425 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
enum rpm_status {
 RPM_ACTIVE = 0,
 RPM_RESUMING,
 RPM_SUSPENDED,
 RPM_SUSPENDING,
};
# 444 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
enum rpm_request {
 RPM_REQ_NONE = 0,
 RPM_REQ_IDLE,
 RPM_REQ_SUSPEND,
 RPM_REQ_RESUME,
};

struct dev_pm_info {
 pm_message_t power_state;
 unsigned int can_wakeup:1;
 unsigned int should_wakeup:1;
 unsigned async_suspend:1;
 enum dpm_state status;
# 480 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
};
# 560 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm.h"
static inline int dpm_suspend_start(pm_message_t state)
{
 return 0;
}



static inline void device_pm_wait_for_dev(struct device *a, struct device *b) {}



enum dpm_order {
 DPM_ORDER_NONE,
 DPM_ORDER_DEV_AFTER_PARENT,
 DPM_ORDER_PARENT_BEFORE_DEV,
 DPM_ORDER_DEV_LAST,
};





extern unsigned int pm_flags;
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/device.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/device.h"
struct dev_archdata {



};

struct pdev_archdata {
};
# 27 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2

struct device;
struct device_private;
struct device_driver;
struct driver_private;
struct class;
struct class_private;
struct bus_type;
struct bus_type_private;
struct device_node;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, const char *buf, size_t count);
};




extern int __must_check bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);

struct bus_type {
 const char *name;
 struct bus_attribute *bus_attrs;
 struct device_attribute *dev_attrs;
 struct driver_attribute *drv_attrs;

 int (*match)(struct device *dev, struct device_driver *drv);
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 int (*probe)(struct device *dev);
 int (*remove)(struct device *dev);
 void (*shutdown)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 const struct dev_pm_ops *pm;

 struct bus_type_private *p;
};

extern int __must_check bus_register(struct bus_type *bus);
extern void bus_unregister(struct bus_type *bus);

extern int __must_check bus_rescan_devices(struct bus_type *bus);



int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
           struct device *start,
           const char *name);

int __must_check bus_for_each_drv(struct bus_type *bus,
      struct device_driver *start, void *data,
      int (*fn)(struct device_driver *, void *));

void bus_sort_breadthfirst(struct bus_type *bus,
      int (*compare)(const struct device *a,
       const struct device *b));






struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
# 119 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h"
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);

struct device_driver {
 const char *name;
 struct bus_type *bus;

 struct module *owner;
 const char *mod_name;

 bool suppress_bind_attrs;





 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 const struct attribute_group **groups;

 const struct dev_pm_ops *pm;

 struct driver_private *p;
};


extern int __must_check driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *get_driver(struct device_driver *drv);
extern void put_driver(struct device_driver *drv);
extern struct device_driver *driver_find(const char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);
extern void wait_for_device_probe(void);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, const char *buf,
    size_t count);
};





extern int __must_check driver_create_file(struct device_driver *driver,
     const struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          const struct driver_attribute *attr);

extern int __must_check driver_add_kobj(struct device_driver *drv,
     struct kobject *kobj,
     const char *fmt, ...);

extern int __must_check driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));




struct class {
 const char *name;
 struct module *owner;

 struct class_attribute *class_attrs;
 struct device_attribute *dev_attrs;
 struct kobject *dev_kobj;

 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, mode_t *mode);

 void (*class_release)(struct class *class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 const struct kobj_ns_type_operations *ns_type;
 const void *(*namespace)(struct device *dev);

 const struct dev_pm_ops *pm;

 struct class_private *p;
};

struct class_dev_iter {
 struct klist_iter ki;
 const struct device_type *type;
};

extern struct kobject *sysfs_dev_block_kobj;
extern struct kobject *sysfs_dev_char_kobj;
extern int __must_check __class_register(struct class *class,
      struct lock_class_key *key);
extern void class_unregister(struct class *class);
# 237 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h"
struct class_compat;
struct class_compat *class_compat_register(const char *name);
void class_compat_unregister(struct class_compat *cls);
int class_compat_create_link(struct class_compat *cls, struct device *dev,
        struct device *device_link);
void class_compat_remove_link(struct class_compat *cls, struct device *dev,
         struct device *device_link);

extern void class_dev_iter_init(struct class_dev_iter *iter,
    struct class *class,
    struct device *start,
    const struct device_type *type);
extern struct device *class_dev_iter_next(struct class_dev_iter *iter);
extern void class_dev_iter_exit(struct class_dev_iter *iter);

extern int class_for_each_device(struct class *class, struct device *start,
     void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class,
     struct device *start, void *data,
     int (*match)(struct device *, void *));

struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *class, struct class_attribute *attr,
   char *buf);
 ssize_t (*store)(struct class *class, struct class_attribute *attr,
   const char *buf, size_t count);
};




extern int __must_check class_create_file(struct class *class,
       const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
         const struct class_attribute *attr);



struct class_attribute_string {
 struct class_attribute attr;
 char *str;
};
# 289 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h"
extern ssize_t show_class_attr_string(struct class *class, struct class_attribute *attr,
                        char *buf);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int __must_check class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class * __must_check __class_create(struct module *owner,
        const char *name,
        struct lock_class_key *key);
extern void class_destroy(struct class *cls);
# 325 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h"
struct device_type {
 const char *name;
 const struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, mode_t *mode);
 void (*release)(struct device *dev);

 const struct dev_pm_ops *pm;
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int __must_check device_create_file(struct device *device,
     const struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          const struct device_attribute *attr);
extern int __must_check device_create_bin_file(struct device *dev,
     const struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       const struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);







extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);

extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
   dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
      dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);


extern void * __must_check devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);

struct device_dma_parameters {




 unsigned int max_segment_size;
 unsigned long segment_boundary_mask;
};

struct device {
 struct device *parent;

 struct device_private *p;

 struct kobject kobj;
 const char *init_name;
 struct device_type *type;

 struct mutex mutex;



 struct bus_type *bus;
 struct device_driver *driver;

 void *platform_data;

 struct dev_pm_info power;




 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct device_dma_parameters *dma_parms;

 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;


 struct dev_archdata archdata;




 dev_t devt;

 spinlock_t devres_lock;
 struct list_head devres_head;

 struct klist_node knode_class;
 struct class *class;
 const struct attribute_group **groups;

 void (*release)(struct device *dev);
};


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm_wakeup.h" 1
# 63 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/pm_wakeup.h"
static inline void device_init_wakeup(struct device *dev, bool val)
{
 dev->power.can_wakeup = val;
}

static inline void device_set_wakeup_capable(struct device *dev, bool capable)
{
}

static inline bool device_can_wakeup(struct device *dev)
{
 return dev->power.can_wakeup;
}

static inline void device_set_wakeup_enable(struct device *dev, bool enable)
{
}

static inline bool device_may_wakeup(struct device *dev)
{
 return false;
}
# 461 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h" 2

static inline const char *dev_name(const struct device *dev)
{

 if (dev->init_name)
  return dev->init_name;

 return kobject_name(&dev->kobj);
}

extern int dev_set_name(struct device *dev, const char *name, ...)
   __attribute__((format(printf, 2, 3)));
# 484 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/device.h"
static inline int dev_to_node(struct device *dev)
{
 return -1;
}
static inline void set_dev_node(struct device *dev, int node)
{
}


static inline unsigned int dev_get_uevent_suppress(const struct device *dev)
{
 return dev->kobj.uevent_suppress;
}

static inline void dev_set_uevent_suppress(struct device *dev, int val)
{
 dev->kobj.uevent_suppress = val;
}

static inline int device_is_registered(struct device *dev)
{
 return dev->kobj.state_in_sysfs;
}

static inline void device_enable_async_suspend(struct device *dev)
{
 if (dev->power.status == DPM_ON)
  dev->power.async_suspend = true;
}

static inline void device_disable_async_suspend(struct device *dev)
{
 if (dev->power.status == DPM_ON)
  dev->power.async_suspend = false;
}

static inline bool device_async_suspend_enabled(struct device *dev)
{
 return !!dev->power.async_suspend;
}

static inline void device_lock(struct device *dev)
{
 mutex_lock(&dev->mutex);
}

static inline int device_trylock(struct device *dev)
{
 return mutex_trylock(&dev->mutex);
}

static inline void device_unlock(struct device *dev)
{
 mutex_unlock(&dev->mutex);
}

void driver_init(void);




extern int __must_check device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int __must_check device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, char *new_name);
extern int device_move(struct device *dev, struct device *new_parent,
         enum dpm_order dpm_order);
extern const char *device_get_devnode(struct device *dev,
          mode_t *mode, const char **tmp);
extern void *dev_get_drvdata(const struct device *dev);
extern void dev_set_drvdata(struct device *dev, void *data);




extern struct device *__root_device_register(const char *name,
          struct module *owner);
static inline struct device *root_device_register(const char *name)
{
 return __root_device_register(name, ((struct module *)0));
}
extern void root_device_unregister(struct device *root);

static inline void *dev_get_platdata(const struct device *dev)
{
 return dev->platform_data;
}





extern int __must_check device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int __must_check device_attach(struct device *dev);
extern int __must_check driver_attach(struct device_driver *drv);
extern int __must_check device_reprobe(struct device *dev);




extern struct device *device_create_vargs(struct class *cls,
       struct device *parent,
       dev_t devt,
       void *drvdata,
       const char *fmt,
       va_list vargs);
extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, void *drvdata,
        const char *fmt, ...)
        __attribute__((format(printf, 5, 6)));
extern void device_destroy(struct class *cls, dev_t devt);







extern int (*platform_notify)(struct device *dev);

extern int (*platform_notify_remove)(struct device *dev);






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);

extern void wait_for_device_probe(void);






static inline int devtmpfs_create_node(struct device *dev) { return 0; }
static inline int devtmpfs_delete_node(struct device *dev) { return 0; }
static inline int devtmpfs_mount(const char *mountpoint) { return 0; }



extern void device_shutdown(void);


extern void sysdev_shutdown(void);


extern const char *dev_driver_string(const struct device *dev);
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/platform_device.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h" 1
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct pci_device_id {
 __u32 vendor, device;
 __u32 subvendor, subdevice;
 __u32 class, class_mask;
 kernel_ulong_t driver_data;
};







struct ieee1394_device_id {
 __u32 match_flags;
 __u32 vendor_id;
 __u32 model_id;
 __u32 specifier_id;
 __u32 version;
 kernel_ulong_t driver_data
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};
# 98 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct usb_device_id {

 __u16 match_flags;


 __u16 idVendor;
 __u16 idProduct;
 __u16 bcdDevice_lo;
 __u16 bcdDevice_hi;


 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;


 __u8 bInterfaceClass;
 __u8 bInterfaceSubClass;
 __u8 bInterfaceProtocol;


 kernel_ulong_t driver_info;
};
# 136 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct hid_device_id {
 __u16 bus;
 __u16 pad1;
 __u32 vendor;
 __u32 product;
 kernel_ulong_t driver_data
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};


struct ccw_device_id {
 __u16 match_flags;

 __u16 cu_type;
 __u16 dev_type;
 __u8 cu_model;
 __u8 dev_model;

 kernel_ulong_t driver_info;
};







struct ap_device_id {
 __u16 match_flags;
 __u8 dev_type;
 __u8 pad1;
 __u32 pad2;
 kernel_ulong_t driver_info;
};




struct css_device_id {
 __u8 match_flags;
 __u8 type;
 __u16 pad2;
 __u32 pad3;
 kernel_ulong_t driver_data;
};




struct acpi_device_id {
 __u8 id[16];
 kernel_ulong_t driver_data;
};




struct pnp_device_id {
 __u8 id[8];
 kernel_ulong_t driver_data;
};

struct pnp_card_device_id {
 __u8 id[8];
 kernel_ulong_t driver_data;
 struct {
  __u8 id[8];
 } devs[8];
};




struct serio_device_id {
 __u8 type;
 __u8 extra;
 __u8 id;
 __u8 proto;
};




struct of_device_id
{
 char name[32];
 char type[32];
 char compatible[128];



 kernel_ulong_t data;

};


struct vio_device_id {
 char type[32];
 char compat[32];
};



struct pcmcia_device_id {
 __u16 match_flags;

 __u16 manf_id;
 __u16 card_id;

 __u8 func_id;


 __u8 function;


 __u8 device_no;

 __u32 prod_id_hash[4]
  __attribute__((aligned(sizeof(__u32))));





 kernel_ulong_t prod_id[4]
  __attribute__((aligned(sizeof(kernel_ulong_t))));



 kernel_ulong_t driver_info;



 kernel_ulong_t cisfile;

};
# 312 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct input_device_id {

 kernel_ulong_t flags;

 __u16 bustype;
 __u16 vendor;
 __u16 product;
 __u16 version;

 kernel_ulong_t evbit[0x1f / BITS_PER_LONG + 1];
 kernel_ulong_t keybit[0x2ff / BITS_PER_LONG + 1];
 kernel_ulong_t relbit[0x0f / BITS_PER_LONG + 1];
 kernel_ulong_t absbit[0x3f / BITS_PER_LONG + 1];
 kernel_ulong_t mscbit[0x07 / BITS_PER_LONG + 1];
 kernel_ulong_t ledbit[0x0f / BITS_PER_LONG + 1];
 kernel_ulong_t sndbit[0x07 / BITS_PER_LONG + 1];
 kernel_ulong_t ffbit[0x7f / BITS_PER_LONG + 1];
 kernel_ulong_t swbit[0x0f / BITS_PER_LONG + 1];

 kernel_ulong_t driver_info;
};






struct eisa_device_id {
 char sig[8];
 kernel_ulong_t driver_data;
};



struct parisc_device_id {
 __u8 hw_type;
 __u8 hversion_rev;
 __u16 hversion;
 __u32 sversion;
};
# 362 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct sdio_device_id {
 __u8 class;
 __u16 vendor;
 __u16 device;
 kernel_ulong_t driver_data
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};


struct ssb_device_id {
 __u16 vendor;
 __u16 coreid;
 __u8 revision;
};
# 385 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct virtio_device_id {
 __u32 device;
 __u32 vendor;
};







struct i2c_device_id {
 char name[20];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};






struct spi_device_id {
 char name[32];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};


enum dmi_field {
 DMI_NONE,
 DMI_BIOS_VENDOR,
 DMI_BIOS_VERSION,
 DMI_BIOS_DATE,
 DMI_SYS_VENDOR,
 DMI_PRODUCT_NAME,
 DMI_PRODUCT_VERSION,
 DMI_PRODUCT_SERIAL,
 DMI_PRODUCT_UUID,
 DMI_BOARD_VENDOR,
 DMI_BOARD_NAME,
 DMI_BOARD_VERSION,
 DMI_BOARD_SERIAL,
 DMI_BOARD_ASSET_TAG,
 DMI_CHASSIS_VENDOR,
 DMI_CHASSIS_TYPE,
 DMI_CHASSIS_VERSION,
 DMI_CHASSIS_SERIAL,
 DMI_CHASSIS_ASSET_TAG,
 DMI_STRING_MAX,
};

struct dmi_strmatch {
 unsigned char slot;
 char substr[79];
};


struct dmi_system_id {
 kernel_ulong_t callback;
 kernel_ulong_t ident;
 struct dmi_strmatch matches[4];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};
# 471 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct platform_device_id {
 char name[20];
 kernel_ulong_t driver_data
   __attribute__((aligned(sizeof(kernel_ulong_t))));
};
# 498 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mod_devicetable.h"
struct mdio_device_id {
 __u32 phy_id;
 __u32 phy_id_mask;
};

struct zorro_device_id {
 __u32 id;
 kernel_ulong_t driver_data;
};






struct isapnp_device_id {
 unsigned short card_vendor, card_device;
 unsigned short vendor, function;
 kernel_ulong_t driver_data;
};
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/platform_device.h" 2

struct platform_device {
 const char * name;
 int id;
 struct device dev;
 u32 num_resources;
 struct resource * resource;

 const struct platform_device_id *id_entry;


 struct pdev_archdata archdata;
};





extern int platform_device_register(struct platform_device *);
extern void platform_device_unregister(struct platform_device *);

extern struct bus_type platform_bus_type;
extern struct device platform_bus;

extern struct resource *platform_get_resource(struct platform_device *, unsigned int, unsigned int);
extern int platform_get_irq(struct platform_device *, unsigned int);
extern struct resource *platform_get_resource_byname(struct platform_device *, unsigned int, const char *);
extern int platform_get_irq_byname(struct platform_device *, const char *);
extern int platform_add_devices(struct platform_device **, int);

extern struct platform_device *platform_device_register_simple(const char *, int id,
     const struct resource *, unsigned int);
extern struct platform_device *platform_device_register_data(struct device *,
  const char *, int, const void *, size_t);

extern struct platform_device *platform_device_alloc(const char *name, int id);
extern int platform_device_add_resources(struct platform_device *pdev,
      const struct resource *res,
      unsigned int num);
extern int platform_device_add_data(struct platform_device *pdev, const void *data, size_t size);
extern int platform_device_add(struct platform_device *pdev);
extern void platform_device_del(struct platform_device *pdev);
extern void platform_device_put(struct platform_device *pdev);

struct platform_driver {
 int (*probe)(struct platform_device *);
 int (*remove)(struct platform_device *);
 void (*shutdown)(struct platform_device *);
 int (*suspend)(struct platform_device *, pm_message_t state);
 int (*resume)(struct platform_device *);
 struct device_driver driver;
 const struct platform_device_id *id_table;
};

extern int platform_driver_register(struct platform_driver *);
extern void platform_driver_unregister(struct platform_driver *);




extern int platform_driver_probe(struct platform_driver *driver,
  int (*probe)(struct platform_device *));




extern struct platform_device *platform_create_bundle(struct platform_driver *driver,
     int (*probe)(struct platform_device *),
     struct resource *res, unsigned int n_res,
     const void *data, size_t size);


struct early_platform_driver {
 const char *class_str;
 struct platform_driver *pdrv;
 struct list_head list;
 int requested_id;
 char *buffer;
 int bufsize;
};




extern int early_platform_driver_register(struct early_platform_driver *epdrv,
       char *buf);
extern void early_platform_add_devices(struct platform_device **devs, int num);

static inline int is_early_platform_device(struct platform_device *pdev)
{
 return !pdev->dev.driver;
}

extern void early_platform_driver_register_all(char *class_str);
extern int early_platform_driver_probe(char *class_str,
           int nr_probe, int user_only);
extern void early_platform_cleanup(void);
# 20 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h" 1
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 25 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 26 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 28 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 30 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 32 "/usr/include/sys/time.h" 2 3 4








# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




enum __itimer_which
  {

    0 = 0,


    1 = 1,



    2 = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
# 191 "/usr/include/sys/time.h" 3 4

# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h" 2
# 1 "/usr/include/sys/ioctl.h" 1 3 4
# 24 "/usr/include/sys/ioctl.h" 3 4



# 1 "/usr/include/bits/ioctls.h" 1 3 4
# 24 "/usr/include/bits/ioctls.h" 3 4
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ioctls.h" 1 3 4



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ioctl.h" 1 3 4
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/ioctl.h" 1 3 4
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ioctl.h" 2 3 4
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ioctls.h" 2 3 4
# 25 "/usr/include/bits/ioctls.h" 2 3 4
# 28 "/usr/include/sys/ioctl.h" 2 3 4


# 1 "/usr/include/bits/ioctl-types.h" 1 3 4
# 28 "/usr/include/bits/ioctl-types.h" 3 4
struct winsize
  {
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
  };


struct termio
  {
    unsigned short int c_iflag;
    unsigned short int c_oflag;
    unsigned short int c_cflag;
    unsigned short int c_lflag;
    unsigned char c_line;
    unsigned char c_cc[8];
};
# 31 "/usr/include/sys/ioctl.h" 2 3 4






# 1 "/usr/include/sys/ttydefaults.h" 1 3 4
# 38 "/usr/include/sys/ioctl.h" 2 3 4




extern int ioctl (int __fd, unsigned long int __request, ...) __attribute__ ((__nothrow__));


# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i486-slackware-linux/4.3.3/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4





# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h" 2







struct input_event {
 struct timeval time;
 __u16 type;
 __u16 code;
 __s32 value;
};
# 43 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct input_id {
 __u16 bustype;
 __u16 vendor;
 __u16 product;
 __u16 version;
};

struct input_absinfo {
 __s32 value;
 __s32 minimum;
 __s32 maximum;
 __s32 fuzz;
 __s32 flat;
 __s32 resolution;
};
# 839 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct ff_replay {
 __u16 length;
 __u16 delay;
};






struct ff_trigger {
 __u16 button;
 __u16 interval;
};
# 866 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct ff_envelope {
 __u16 attack_length;
 __u16 attack_level;
 __u16 fade_length;
 __u16 fade_level;
};






struct ff_constant_effect {
 __s16 level;
 struct ff_envelope envelope;
};







struct ff_ramp_effect {
 __s16 start_level;
 __s16 end_level;
 struct ff_envelope envelope;
};
# 905 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct ff_condition_effect {
 __u16 right_saturation;
 __u16 left_saturation;

 __s16 right_coeff;
 __s16 left_coeff;

 __u16 deadband;
 __s16 center;
};
# 934 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct ff_periodic_effect {
 __u16 waveform;
 __u16 period;
 __s16 magnitude;
 __s16 offset;
 __u16 phase;

 struct ff_envelope envelope;

 __u32 custom_len;
 __s16 *custom_data;
};
# 955 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct ff_rumble_effect {
 __u16 strong_magnitude;
 __u16 weak_magnitude;
};
# 983 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/input.h"
struct ff_effect {
 __u16 type;
 __s16 id;
 __u16 direction;
 struct ff_trigger trigger;
 struct ff_replay replay;

 union {
  struct ff_constant_effect constant;
  struct ff_ramp_effect ramp;
  struct ff_periodic_effect periodic;
  struct ff_condition_effect condition[2];
  struct ff_rumble_effect rumble;
 } u;
};
# 21 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/io.h" 1
# 22 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/io.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/io.h" 1
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/io.h" 2


struct device;

void __iowrite32_copy(void *to, const void *from, size_t count);
void __iowrite64_copy(void *to, const void *from, size_t count);





static inline int ioremap_page_range(unsigned long addr, unsigned long end,
         unsigned long phys_addr, pgprot_t prot)
{
 return 0;
}
# 49 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/io.h"
static inline void *devm_ioport_map(struct device *dev,
          unsigned long port,
          unsigned int nr)
{
 return ((void *)0);
}

static inline void devm_ioport_unmap(struct device *dev, void *addr)
{
}


void *devm_ioremap(struct device *dev, resource_size_t offset,
       unsigned long size);
void *devm_ioremap_nocache(struct device *dev, resource_size_t offset,
        unsigned long size);
void devm_iounmap(struct device *dev, void *addr);
int check_signature(const volatile void *io_addr,
   const unsigned char *signature, int length);
void devm_ioremap_release(struct device *dev, void *res);
# 22 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/delay.h" 1
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/delay.h"
extern unsigned long loops_per_jiffy;

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/delay.h" 1
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/delay.h"
extern void __delay(unsigned long loops);
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/delay.h"
extern void __bad_udelay(void);
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/delay.h"
extern void __udelay(unsigned long usecs);
extern void __const_udelay(unsigned long);
# 43 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/delay.h"
extern void set_delay_fn(void (*fn)(unsigned long));
extern void read_current_timer_delay_loop(unsigned long loops);
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/delay.h" 2
# 37 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/delay.h"
static inline void ndelay(unsigned long x)
{
 (__builtin_constant_p(DIV_ROUND_UP(x, 1000)) ? ((DIV_ROUND_UP(x, 1000)) > (2 * 1000) ? __bad_udelay() : __const_udelay((DIV_ROUND_UP(x, 1000)) * ((2199023U*100)>>11))) : __udelay(DIV_ROUND_UP(x, 1000)));
}



extern unsigned long lpj_fine;
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);
void usleep_range(unsigned long min, unsigned long max);

static inline void usleep(unsigned long usecs)
{
 usleep_range(usecs, usecs);
}

static inline void ssleep(unsigned int seconds)
{
 msleep(seconds * 1000);
}
# 23 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bootmem.h" 1







# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/dma.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bootmem.h" 2





extern unsigned long max_low_pfn;
extern unsigned long min_low_pfn;




extern unsigned long max_pfn;
# 31 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bootmem.h"
typedef struct bootmem_data {
 unsigned long node_min_pfn;
 unsigned long node_low_pfn;
 void *node_bootmem_map;
 unsigned long last_end_off;
 unsigned long hint_idx;
 struct list_head list;
} bootmem_data_t;

extern bootmem_data_t bootmem_node_data[];


extern unsigned long bootmem_bootmap_pages(unsigned long);

extern unsigned long init_bootmem_node(pg_data_t *pgdat,
           unsigned long freepfn,
           unsigned long startpfn,
           unsigned long endpfn);
extern unsigned long init_bootmem(unsigned long addr, unsigned long memend);

unsigned long free_all_memory_core_early(int nodeid);
extern unsigned long free_all_bootmem_node(pg_data_t *pgdat);
extern unsigned long free_all_bootmem(void);

extern void free_bootmem_node(pg_data_t *pgdat,
         unsigned long addr,
         unsigned long size);
extern void free_bootmem(unsigned long addr, unsigned long size);
extern void free_bootmem_late(unsigned long addr, unsigned long size);
# 72 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bootmem.h"
extern int reserve_bootmem(unsigned long addr,
      unsigned long size,
      int flags);
extern int reserve_bootmem_node(pg_data_t *pgdat,
    unsigned long physaddr,
    unsigned long size,
    int flags);

extern void *__alloc_bootmem(unsigned long size,
        unsigned long align,
        unsigned long goal);
extern void *__alloc_bootmem_nopanic(unsigned long size,
         unsigned long align,
         unsigned long goal);
extern void *__alloc_bootmem_node(pg_data_t *pgdat,
      unsigned long size,
      unsigned long align,
      unsigned long goal);
void *__alloc_bootmem_node_high(pg_data_t *pgdat,
      unsigned long size,
      unsigned long align,
      unsigned long goal);
extern void *__alloc_bootmem_node_nopanic(pg_data_t *pgdat,
      unsigned long size,
      unsigned long align,
      unsigned long goal);
extern void *__alloc_bootmem_low(unsigned long size,
     unsigned long align,
     unsigned long goal);
extern void *__alloc_bootmem_low_node(pg_data_t *pgdat,
          unsigned long size,
          unsigned long align,
          unsigned long goal);
# 128 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bootmem.h"
extern int reserve_bootmem_generic(unsigned long addr, unsigned long size,
       int flags);

extern void *alloc_bootmem_section(unsigned long size,
       unsigned long section_nr);




static inline void *alloc_remap(int nid, unsigned long size)
{
 return ((void *)0);
}


extern void *alloc_large_system_hash(const char *tablename,
         unsigned long bucketsize,
         unsigned long numentries,
         int scale,
         int flags,
         unsigned int *_hash_shift,
         unsigned int *_hash_mask,
         unsigned long limit);
# 164 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/bootmem.h"
extern int hashdist;
# 24 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h" 1
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/wakelock.h" 1
# 29 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/wakelock.h"
enum {
 WAKE_LOCK_SUSPEND,
 WAKE_LOCK_IDLE,
 WAKE_LOCK_TYPE_COUNT
};

struct wake_lock {
# 53 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/wakelock.h"
};
# 78 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/wakelock.h"
static inline void wake_lock_init(struct wake_lock *lock, int type,
     const char *name) {}
static inline void wake_lock_destroy(struct wake_lock *lock) {}
static inline void wake_lock(struct wake_lock *lock) {}
static inline void wake_lock_timeout(struct wake_lock *lock, long timeout) {}
static inline void wake_unlock(struct wake_lock *lock) {}

static inline int wake_lock_active(struct wake_lock *lock) { return 0; }
static inline long has_wake_lock(int type) { return 0; }
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds.h" 1
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds.h"
struct device;




enum led_brightness {
 LED_OFF = 0,
 LED_HALF = 127,
 LED_FULL = 255,
};

struct led_classdev {
 const char *name;
 int brightness;
 int max_brightness;
 int flags;
# 43 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds.h"
 void (*brightness_set)(struct led_classdev *led_cdev,
       enum led_brightness brightness);

 enum led_brightness (*brightness_get)(struct led_classdev *led_cdev);





 int (*blink_set)(struct led_classdev *led_cdev,
         unsigned long *delay_on,
         unsigned long *delay_off);

 struct device *dev;
 struct list_head node;
 const char *default_trigger;
# 68 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds.h"
};

extern int led_classdev_register(struct device *parent,
     struct led_classdev *led_cdev);
extern void led_classdev_unregister(struct led_classdev *led_cdev);
extern void led_classdev_suspend(struct led_classdev *led_cdev);
extern void led_classdev_resume(struct led_classdev *led_cdev);
# 131 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds.h"
struct led_info {
 const char *name;
 const char *default_trigger;
 int flags;
};

struct led_platform_data {
 int num_leds;
 struct led_info *leds;
};


struct gpio_led {
 const char *name;
 const char *default_trigger;
 unsigned gpio;
 unsigned active_low : 1;
 unsigned retain_state_suspended : 1;
 unsigned default_state : 2;

};




struct gpio_led_platform_data {
 int num_leds;
 struct gpio_led *leds;




 int (*gpio_blink_set)(unsigned gpio, int state,
     unsigned long *delay_on,
     unsigned long *delay_off);
};
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h" 2
# 34 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h"
enum {
 POWER_SUPPLY_STATUS_UNKNOWN = 0,
 POWER_SUPPLY_STATUS_CHARGING,
 POWER_SUPPLY_STATUS_DISCHARGING,
 POWER_SUPPLY_STATUS_NOT_CHARGING,
 POWER_SUPPLY_STATUS_FULL,
};

enum {
 POWER_SUPPLY_CHARGE_TYPE_UNKNOWN = 0,
 POWER_SUPPLY_CHARGE_TYPE_NONE,
 POWER_SUPPLY_CHARGE_TYPE_TRICKLE,
 POWER_SUPPLY_CHARGE_TYPE_FAST,
};

enum {
 POWER_SUPPLY_HEALTH_UNKNOWN = 0,
 POWER_SUPPLY_HEALTH_GOOD,
 POWER_SUPPLY_HEALTH_OVERHEAT,
 POWER_SUPPLY_HEALTH_DEAD,
 POWER_SUPPLY_HEALTH_OVERVOLTAGE,
 POWER_SUPPLY_HEALTH_UNSPEC_FAILURE,
 POWER_SUPPLY_HEALTH_COLD,
};

enum {
 POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0,
 POWER_SUPPLY_TECHNOLOGY_NiMH,
 POWER_SUPPLY_TECHNOLOGY_LION,
 POWER_SUPPLY_TECHNOLOGY_LIPO,
 POWER_SUPPLY_TECHNOLOGY_LiFe,
 POWER_SUPPLY_TECHNOLOGY_NiCd,
 POWER_SUPPLY_TECHNOLOGY_LiMn,
};

enum {
 POWER_SUPPLY_CAPACITY_LEVEL_UNKNOWN = 0,
 POWER_SUPPLY_CAPACITY_LEVEL_CRITICAL,
 POWER_SUPPLY_CAPACITY_LEVEL_LOW,
 POWER_SUPPLY_CAPACITY_LEVEL_NORMAL,
 POWER_SUPPLY_CAPACITY_LEVEL_HIGH,
 POWER_SUPPLY_CAPACITY_LEVEL_FULL,
};

enum power_supply_property {

 POWER_SUPPLY_PROP_STATUS = 0,
 POWER_SUPPLY_PROP_CHARGE_TYPE,
 POWER_SUPPLY_PROP_HEALTH,
 POWER_SUPPLY_PROP_PRESENT,
 POWER_SUPPLY_PROP_ONLINE,
 POWER_SUPPLY_PROP_TECHNOLOGY,
 POWER_SUPPLY_PROP_CYCLE_COUNT,
 POWER_SUPPLY_PROP_VOLTAGE_MAX,
 POWER_SUPPLY_PROP_VOLTAGE_MIN,
 POWER_SUPPLY_PROP_VOLTAGE_MAX_DESIGN,
 POWER_SUPPLY_PROP_VOLTAGE_MIN_DESIGN,
 POWER_SUPPLY_PROP_VOLTAGE_NOW,
 POWER_SUPPLY_PROP_VOLTAGE_AVG,
 POWER_SUPPLY_PROP_CURRENT_NOW,
 POWER_SUPPLY_PROP_CURRENT_AVG,
 POWER_SUPPLY_PROP_POWER_NOW,
 POWER_SUPPLY_PROP_POWER_AVG,
 POWER_SUPPLY_PROP_CHARGE_FULL_DESIGN,
 POWER_SUPPLY_PROP_CHARGE_EMPTY_DESIGN,
 POWER_SUPPLY_PROP_CHARGE_FULL,
 POWER_SUPPLY_PROP_CHARGE_EMPTY,
 POWER_SUPPLY_PROP_CHARGE_NOW,
 POWER_SUPPLY_PROP_CHARGE_AVG,
 POWER_SUPPLY_PROP_CHARGE_COUNTER,
 POWER_SUPPLY_PROP_ENERGY_FULL_DESIGN,
 POWER_SUPPLY_PROP_ENERGY_EMPTY_DESIGN,
 POWER_SUPPLY_PROP_ENERGY_FULL,
 POWER_SUPPLY_PROP_ENERGY_EMPTY,
 POWER_SUPPLY_PROP_ENERGY_NOW,
 POWER_SUPPLY_PROP_ENERGY_AVG,
 POWER_SUPPLY_PROP_CAPACITY,
 POWER_SUPPLY_PROP_CAPACITY_LEVEL,
 POWER_SUPPLY_PROP_TEMP,
 POWER_SUPPLY_PROP_TEMP_AMBIENT,
 POWER_SUPPLY_PROP_TIME_TO_EMPTY_NOW,
 POWER_SUPPLY_PROP_TIME_TO_EMPTY_AVG,
 POWER_SUPPLY_PROP_TIME_TO_FULL_NOW,
 POWER_SUPPLY_PROP_TIME_TO_FULL_AVG,
 POWER_SUPPLY_PROP_TYPE,

 POWER_SUPPLY_PROP_MODEL_NAME,
 POWER_SUPPLY_PROP_MANUFACTURER,
 POWER_SUPPLY_PROP_SERIAL_NUMBER,
};

enum power_supply_type {
 POWER_SUPPLY_TYPE_BATTERY = 0,
 POWER_SUPPLY_TYPE_UPS,
 POWER_SUPPLY_TYPE_MAINS,
 POWER_SUPPLY_TYPE_USB,
};

union power_supply_propval {
 int intval;
 const char *strval;
};

struct power_supply {
 const char *name;
 enum power_supply_type type;
 enum power_supply_property *properties;
 size_t num_properties;

 char **supplied_to;
 size_t num_supplicants;

 int (*get_property)(struct power_supply *psy,
       enum power_supply_property psp,
       union power_supply_propval *val);
 int (*set_property)(struct power_supply *psy,
       enum power_supply_property psp,
       const union power_supply_propval *val);
 int (*property_is_writeable)(struct power_supply *psy,
         enum power_supply_property psp);
 void (*external_power_changed)(struct power_supply *psy);
 void (*set_charged)(struct power_supply *psy);


 int use_for_apm;


 struct device *dev;
 struct work_struct changed_work;
 spinlock_t changed_lock;
 bool changed;
 struct wake_lock work_wake_lock;
# 177 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h"
};
# 186 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/power_supply.h"
struct power_supply_info {
 const char *name;
 int technology;
 int voltage_max_design;
 int voltage_min_design;
 int charge_full_design;
 int charge_empty_design;
 int energy_full_design;
 int energy_empty_design;
 int use_for_apm;
};

extern struct power_supply *power_supply_get_by_name(char *name);
extern void power_supply_changed(struct power_supply *psy);
extern int power_supply_am_i_supplied(struct power_supply *psy);
extern int power_supply_set_battery_charged(struct power_supply *psy);




static inline int power_supply_is_system_supplied(void) { return -38; }


extern int power_supply_register(struct device *parent,
     struct power_supply *psy);
extern void power_supply_unregister(struct power_supply *psy);


extern struct class *power_supply_class;
# 25 "board-zte-blade.c" 2


# 1 "./include/mach/hardware.h" 1
# 28 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach-types.h" 1
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/generated/mach-types.h" 1
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/generated/mach-types.h"
extern unsigned int __machine_arch_type;
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach-types.h" 2
# 29 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/arch.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/arch.h"
struct tag;
struct meminfo;
struct sys_timer;

struct machine_desc {




 unsigned int nr;
 unsigned int phys_io;
 unsigned int io_pg_offst;


 const char *name;
 unsigned long boot_params;

 unsigned int video_start;
 unsigned int video_end;

 unsigned int reserve_lp0 :1;
 unsigned int reserve_lp1 :1;
 unsigned int reserve_lp2 :1;
 unsigned int soft_reboot :1;
 void (*fixup)(struct machine_desc *,
      struct tag *, char **,
      struct meminfo *);
 void (*map_io)(void);
 void (*init_irq)(void);
 struct sys_timer *timer;
 void (*init_machine)(void);
};
# 30 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/map.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/map.h"
struct map_desc {
 unsigned long virtual;
 unsigned long pfn;
 unsigned long length;
 unsigned int type;
};
# 31 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/flash.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/flash.h"
struct mtd_partition;
struct mtd_info;
# 28 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/flash.h"
struct flash_platform_data {
 const char *map_name;
 const char *name;
 unsigned int width;
 unsigned int interleave;
 int (*init)(void);
 void (*exit)(void);
 void (*set_vpp)(int on);
 void (*mmcontrol)(struct mtd_info *mtd, int sync_read);
 struct mtd_partition *parts;
 unsigned int nr_parts;
};
# 32 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/setup.h" 1
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/setup.h"
struct tag_header {
 __u32 size;
 __u32 tag;
};




struct tag_core {
 __u32 flags;
 __u32 pagesize;
 __u32 rootdev;
};
# 50 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/setup.h"
struct tag_mem32 {
 __u32 size;
 __u32 start;
};




struct tag_videotext {
 __u8 x;
 __u8 y;
 __u16 video_page;
 __u8 video_mode;
 __u8 video_cols;
 __u16 video_ega_bx;
 __u8 video_lines;
 __u8 video_isvga;
 __u16 video_points;
};




struct tag_ramdisk {
 __u32 flags;
 __u32 size;
 __u32 start;
};
# 89 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/setup.h"
struct tag_initrd {
 __u32 start;
 __u32 size;
};




struct tag_serialnr {
 __u32 low;
 __u32 high;
};




struct tag_revision {
 __u32 rev;
};






struct tag_videolfb {
 __u16 lfb_width;
 __u16 lfb_height;
 __u16 lfb_depth;
 __u16 lfb_linelength;
 __u32 lfb_base;
 __u32 lfb_size;
 __u8 red_size;
 __u8 red_pos;
 __u8 green_size;
 __u8 green_pos;
 __u8 blue_size;
 __u8 blue_pos;
 __u8 rsvd_size;
 __u8 rsvd_pos;
};




struct tag_cmdline {
 char cmdline[1];
};




struct tag_acorn {
 __u32 memc_control_reg;
 __u32 vram_pages;
 __u8 sounddefault;
 __u8 adfsdrives;
};




struct tag_memclk {
 __u32 fmemclk;
};

struct tag {
 struct tag_header hdr;
 union {
  struct tag_core core;
  struct tag_mem32 mem;
  struct tag_videotext videotext;
  struct tag_ramdisk ramdisk;
  struct tag_initrd initrd;
  struct tag_serialnr serialnr;
  struct tag_revision revision;
  struct tag_videolfb videolfb;
  struct tag_cmdline cmdline;




  struct tag_acorn acorn;




  struct tag_memclk memclk;
 } u;
};

struct tagtable {
 __u32 tag;
 int (*parse)(const struct tag *);
};
# 33 "board-zte-blade.c" 2




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/mmc.h" 1






# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/sched.h" 1
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/core.h" 1
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/core.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 1
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/irqreturn.h" 1
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/irqreturn.h"
enum irqreturn {
 IRQ_NONE,
 IRQ_HANDLED,
 IRQ_WAKE_THREAD,
};

typedef enum irqreturn irqreturn_t;
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/irqnr.h" 1
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ftrace_irq.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ftrace_irq.h"
static inline void ftrace_nmi_enter(void) { }
static inline void ftrace_nmi_exit(void) { }
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/hardirq.h" 1





# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/irq.h" 1



# 1 "./include/mach/irqs.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/irq.h" 2
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/irq.h"
struct irqaction;
struct pt_regs;
extern void migrate_irqs(void);

extern void asm_do_IRQ(unsigned int, struct pt_regs *);
void init_IRQ(void);
# 7 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/hardirq.h" 2

typedef struct {
 unsigned int __softirq_pending;
 unsigned int local_timer_irqs;
} __attribute__((__aligned__((1 << CONFIG_ARM_L1_CACHE_SHIFT)))) irq_cpustat_t;

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/irq_cpustat.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/irq_cpustat.h"
extern irq_cpustat_t irq_stat[];
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/hardirq.h" 2
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h" 2
# 133 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h"
struct task_struct;


static inline void account_system_vtime(struct task_struct *tsk)
{
}
# 193 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h"
extern void irq_enter(void);
# 208 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hardirq.h"
extern void irq_exit(void);
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/irqflags.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h" 1
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rbtree.h" 1
# 100 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rbtree.h"
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);

typedef void (*rb_augment_f)(struct rb_node *node, void *data);

extern void rb_augment_insert(struct rb_node *node,
         rb_augment_f func, void *data);
extern struct rb_node *rb_augment_erase_begin(struct rb_node *node);
extern void rb_augment_erase_end(struct rb_node *node,
     rb_augment_f func, void *data);


extern struct rb_node *rb_next(const struct rb_node *);
extern struct rb_node *rb_prev(const struct rb_node *);
extern struct rb_node *rb_first(const struct rb_root *);
extern struct rb_node *rb_last(const struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 19 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h" 2
# 27 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS = 0x0,
 HRTIMER_MODE_REL = 0x1,
 HRTIMER_MODE_PINNED = 0x02,
 HRTIMER_MODE_ABS_PINNED = 0x02,
 HRTIMER_MODE_REL_PINNED = 0x03,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 103 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t _expires;
 ktime_t _softexpires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;





};
# 124 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 141 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 clockid_t index;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t softirq_time;



};
# 171 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
struct hrtimer_cpu_base {
 raw_spinlock_t lock;
 struct hrtimer_clock_base clock_base[2];
# 183 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
};

static inline void hrtimer_set_expires(struct hrtimer *timer, ktime_t time)
{
 timer->_expires = time;
 timer->_softexpires = time;
}

static inline void hrtimer_set_expires_range(struct hrtimer *timer, ktime_t time, ktime_t delta)
{
 timer->_softexpires = time;
 timer->_expires = ktime_add_safe(time, delta);
}

static inline void hrtimer_set_expires_range_ns(struct hrtimer *timer, ktime_t time, unsigned long delta)
{
 timer->_softexpires = time;
 timer->_expires = ktime_add_safe(time, ns_to_ktime(delta));
}

static inline void hrtimer_set_expires_tv64(struct hrtimer *timer, s64 tv64)
{
 timer->_expires.tv64 = tv64;
 timer->_softexpires.tv64 = tv64;
}

static inline void hrtimer_add_expires(struct hrtimer *timer, ktime_t time)
{
 timer->_expires = ktime_add_safe(timer->_expires, time);
 timer->_softexpires = ktime_add_safe(timer->_softexpires, time);
}

static inline void hrtimer_add_expires_ns(struct hrtimer *timer, u64 ns)
{
 timer->_expires = ktime_add_ns(timer->_expires, ns);
 timer->_softexpires = ktime_add_ns(timer->_softexpires, ns);
}

static inline ktime_t hrtimer_get_expires(const struct hrtimer *timer)
{
 return timer->_expires;
}

static inline ktime_t hrtimer_get_softexpires(const struct hrtimer *timer)
{
 return timer->_softexpires;
}

static inline s64 hrtimer_get_expires_tv64(const struct hrtimer *timer)
{
 return timer->_expires.tv64;
}
static inline s64 hrtimer_get_softexpires_tv64(const struct hrtimer *timer)
{
 return timer->_softexpires.tv64;
}

static inline s64 hrtimer_get_expires_ns(const struct hrtimer *timer)
{
 return ktime_to_ns(timer->_expires);
}

static inline ktime_t hrtimer_expires_remaining(const struct hrtimer *timer)
{
    return ktime_sub(timer->_expires, timer->base->get_time());
}
# 293 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/hrtimer.h"
static inline void clock_was_set(void) { }
static inline void hrtimer_peek_ahead_timers(void) { }

static inline void hres_timers_resume(void) { }





static inline ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->softirq_time;
}

static inline int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return 0;
}


extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);


extern __attribute__((section(".data" ""))) __typeof__(struct tick_device) tick_cpu_device;





extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);







static inline void hrtimer_init_on_stack(struct hrtimer *timer,
      clockid_t which_clock,
      enum hrtimer_mode mode)
{
 hrtimer_init(timer, which_clock, mode);
}
static inline void destroy_hrtimer_on_stack(struct hrtimer *timer) { }



extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
   unsigned long range_ns, const enum hrtimer_mode mode);
extern int
__hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
    unsigned long delta_ns,
    const enum hrtimer_mode mode, int wakeup);

extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline int hrtimer_start_expires(struct hrtimer *timer,
      enum hrtimer_mode mode)
{
 unsigned long delta;
 ktime_t soft, hard;
 soft = hrtimer_get_softexpires(timer);
 hard = hrtimer_get_expires(timer);
 delta = ktime_to_ns(ktime_sub(hard, soft));
 return hrtimer_start_range_ns(timer, soft, delta, mode);
}

static inline int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start_expires(timer, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);





static inline int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state & 0x01;
}





static inline int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);

extern int schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
      const enum hrtimer_mode mode);
extern int schedule_hrtimeout_range_clock(ktime_t *expires,
  unsigned long delta, const enum hrtimer_mode mode, int clock);
extern int schedule_hrtimeout(ktime_t *expires, const enum hrtimer_mode mode);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) notrace hrtimers_init(void);


extern u64 ktime_divns(const ktime_t kt, s64 div);





extern void sysrq_timer_list_show(void);
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ptrace.h" 1
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ptrace.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/hwcap.h" 1
# 14 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ptrace.h" 2
# 101 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ptrace.h"
struct pt_regs {
 long uregs[18];
};
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h" 2
# 79 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
enum {
 IRQTF_RUNTHREAD,
 IRQTF_DIED,
 IRQTF_WARNED,
 IRQTF_AFFINITY,
};
# 93 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
enum {
 IRQC_IS_HARDIRQ = 0,
 IRQC_IS_NESTED,
};

typedef irqreturn_t (*irq_handler_t)(int, void *);
# 113 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
struct irqaction {
 irq_handler_t handler;
 unsigned long flags;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir;
 irq_handler_t thread_fn;
 struct task_struct *thread;
 unsigned long thread_flags;
};

extern irqreturn_t no_action(int cpl, void *dev_id);
# 148 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
extern int __must_check
request_irq(unsigned int irq, irq_handler_t handler, unsigned long flags,
     const char *name, void *dev);







static inline int __must_check
request_threaded_irq(unsigned int irq, irq_handler_t handler,
       irq_handler_t thread_fn,
       unsigned long flags, const char *name, void *dev)
{
 return request_irq(irq, handler, flags, name, dev);
}

static inline int __must_check
request_any_context_irq(unsigned int irq, irq_handler_t handler,
   unsigned long flags, const char *name, void *dev_id)
{
 return request_irq(irq, handler, flags, name, dev_id);
}

static inline void exit_irq_thread(void) { }


extern void free_irq(unsigned int, void *);

struct device;

extern int __must_check
devm_request_threaded_irq(struct device *dev, unsigned int irq,
     irq_handler_t handler, irq_handler_t thread_fn,
     unsigned long irqflags, const char *devname,
     void *dev_id);

static inline int __must_check
devm_request_irq(struct device *dev, unsigned int irq, irq_handler_t handler,
   unsigned long irqflags, const char *devname, void *dev_id)
{
 return devm_request_threaded_irq(dev, irq, handler, ((void *)0), irqflags,
      devname, dev_id);
}

extern void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id);
# 214 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);
# 228 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
static inline void suspend_device_irqs(void) { };
static inline void resume_device_irqs(void) { };
static inline int check_wakeup_irqs(void) { return 0; }
# 244 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
static inline int irq_set_affinity(unsigned int irq, const struct cpumask *m)
{
 return -22;
}

static inline int irq_can_set_affinity(unsigned int irq)
{
 return 0;
}

static inline int irq_select_affinity(unsigned int irq) { return 0; }

static inline int irq_set_affinity_hint(unsigned int irq,
                                        const struct cpumask *m)
{
 return -22;
}
# 344 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
static inline int enable_irq_wake(unsigned int irq)
{
 return 0;
}

static inline int disable_irq_wake(unsigned int irq)
{
 return 0;
}
# 376 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 BLOCK_IOPOLL_SOFTIRQ,
 TASKLET_SOFTIRQ,
 SCHED_SOFTIRQ,
 HRTIMER_SOFTIRQ,
 RCU_SOFTIRQ,

 NR_SOFTIRQS
};




extern char *softirq_to_name[NR_SOFTIRQS];





struct softirq_action
{
 void (*action)(struct softirq_action *);
};

 void do_softirq(void);
 void __do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action *));
extern void softirq_init(void);

extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
extern void wakeup_softirqd(void);
# 422 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
extern __attribute__((section(".data" ""))) __typeof__(struct list_head [NR_SOFTIRQS]) softirq_work_list;




extern void send_remote_softirq(struct call_single_data *cp, int cpu, int softirq);




extern void __send_remote_softirq(struct call_single_data *cp, int cpu,
      int this_cpu, int softirq);
# 455 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 471 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN
};
# 499 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
extern void __tasklet_schedule(struct tasklet_struct *t);

static inline void tasklet_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule(t);
}

extern void __tasklet_hi_schedule_first(struct tasklet_struct *t);







static inline void tasklet_hi_schedule_first(struct tasklet_struct *t)
{
 if (!test_and_set_bit(TASKLET_STATE_SCHED, &t->state))
  __tasklet_hi_schedule_first(t);
}


static inline void tasklet_disable_nosync(struct tasklet_struct *t)
{
 atomic_inc(&t->count);
 smp_mb__after_atomic_inc();
}

static inline void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 do { } while (0);
 smp_mb();
}

static inline void tasklet_enable(struct tasklet_struct *t)
{
 smp_mb__before_atomic_dec();
 atomic_dec(&t->count);
}

static inline void tasklet_hi_enable(struct tasklet_struct *t)
{
 smp_mb__before_atomic_dec();
 atomic_dec(&t->count);
}

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);

struct tasklet_hrtimer {
 struct hrtimer timer;
 struct tasklet_struct tasklet;
 enum hrtimer_restart (*function)(struct hrtimer *);
};

extern void
tasklet_hrtimer_init(struct tasklet_hrtimer *ttimer,
       enum hrtimer_restart (*function)(struct hrtimer *),
       clockid_t which_clock, enum hrtimer_mode mode);

static inline
int tasklet_hrtimer_start(struct tasklet_hrtimer *ttimer, ktime_t time,
     const enum hrtimer_mode mode)
{
 return hrtimer_start(&ttimer->timer, time, mode);
}

static inline
void tasklet_hrtimer_cancel(struct tasklet_hrtimer *ttimer)
{
 hrtimer_cancel(&ttimer->timer);
 tasklet_kill(&ttimer->tasklet);
}
# 627 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);






static inline void init_irq_proc(void)
{
}


struct seq_file;
int show_interrupts(struct seq_file *p, void *v);

struct irq_desc;

extern int early_irq_init(void);
extern int arch_probe_nr_irqs(void);
extern int arch_early_irq_init(void);
extern int arch_init_chip_data(struct irq_desc *desc, int node);
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/core.h" 2


struct request;
struct mmc_data;
struct mmc_request;

struct mmc_command {
 u32 opcode;
 u32 arg;
 u32 resp[4];
 unsigned int flags;
# 78 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/core.h"
 unsigned int retries;
 unsigned int error;
# 95 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/core.h"
 struct mmc_data *data;
 struct mmc_request *mrq;
};

struct mmc_data {
 unsigned int timeout_ns;
 unsigned int timeout_clks;
 unsigned int blksz;
 unsigned int blocks;
 unsigned int error;
 unsigned int flags;





 unsigned int bytes_xfered;

 struct mmc_command *stop;
 struct mmc_request *mrq;

 unsigned int sg_len;
 struct scatterlist *sg;
};

struct mmc_request {
 struct mmc_command *cmd;
 struct mmc_data *data;
 struct mmc_command *stop;

 void *done_data;
 void (*done)(struct mmc_request *);
};

struct mmc_host;
struct mmc_card;

extern void mmc_wait_for_req(struct mmc_host *, struct mmc_request *);
extern int mmc_wait_for_cmd(struct mmc_host *, struct mmc_command *, int);
extern int mmc_wait_for_app_cmd(struct mmc_host *, struct mmc_card *,
 struct mmc_command *, int);

extern void mmc_set_data_timeout(struct mmc_data *, const struct mmc_card *);
extern unsigned int mmc_align_data_size(struct mmc_card *, unsigned int);

extern int __mmc_claim_host(struct mmc_host *host, atomic_t *abort);
extern void mmc_release_host(struct mmc_host *host);
extern int mmc_try_claim_host(struct mmc_host *host);







static inline void mmc_claim_host(struct mmc_host *host)
{
 __mmc_claim_host(host, ((void *)0));
}

extern u32 mmc_vddrange_to_ocrmask(int vdd_min, int vdd_max);
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/pm.h" 1
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/pm.h"
typedef unsigned int mmc_pm_flag_t;
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h" 2

struct mmc_ios {
 unsigned int clock;
 unsigned short vdd;



 unsigned char bus_mode;




 unsigned char chip_select;





 unsigned char power_mode;





 unsigned char bus_width;





 unsigned char timing;




};

struct mmc_host_ops {
# 83 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
 int (*enable)(struct mmc_host *host);
 int (*disable)(struct mmc_host *host, int lazy);
 void (*request)(struct mmc_host *host, struct mmc_request *req);
# 106 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
 void (*set_ios)(struct mmc_host *host, struct mmc_ios *ios);
 int (*get_ro)(struct mmc_host *host);
 int (*get_cd)(struct mmc_host *host);

 void (*enable_sdio_irq)(struct mmc_host *host, int enable);


 void (*init_card)(struct mmc_host *host, struct mmc_card *card);
};

struct mmc_card;
struct device;

struct mmc_host {
 struct device *parent;
 struct device class_dev;
 int index;
 const struct mmc_host_ops *ops;
 unsigned int f_min;
 unsigned int f_max;
 u32 ocr_avail;
 struct notifier_block pm_notify;
# 147 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
 unsigned long caps;
# 160 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
 mmc_pm_flag_t pm_caps;


 unsigned int max_seg_size;
 unsigned short max_hw_segs;
 unsigned short max_phys_segs;
 unsigned short unused;
 unsigned int max_req_size;
 unsigned int max_blk_size;
 unsigned int max_blk_count;


 spinlock_t lock;

 struct mmc_ios ios;
 u32 ocr;


 unsigned int use_spi_crc:1;
 unsigned int claimed:1;
 unsigned int bus_dead:1;





 int enabled;
 int rescan_disable;
 int nesting_cnt;
 int en_dis_recurs;
 unsigned int disable_delay;
 struct delayed_work disable;

 struct mmc_card *card;

 wait_queue_head_t wq;
 struct task_struct *claimer;
 struct task_struct *suspend_task;
 int claim_cnt;

 struct delayed_work detect;

 const struct mmc_bus_ops *bus_ops;
 unsigned int bus_refs;

 unsigned int bus_resume_flags;



 unsigned int sdio_irqs;
 struct task_struct *sdio_irq_thread;
 atomic_t sdio_irq_thread_abort;

 mmc_pm_flag_t pm_flags;





 struct dentry *debugfs_root;
# 244 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
 unsigned long private[0] __attribute__((__aligned__((1 << CONFIG_ARM_L1_CACHE_SHIFT))));
};

extern struct mmc_host *mmc_alloc_host(int extra, struct device *);
extern int mmc_add_host(struct mmc_host *);
extern void mmc_remove_host(struct mmc_host *);
extern void mmc_free_host(struct mmc_host *);
# 260 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
static inline void *mmc_priv(struct mmc_host *host)
{
 return (void *)host->private;
}
# 273 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/host.h"
static inline void mmc_set_bus_resume_policy(struct mmc_host *host, int manual)
{
 if (manual)
  host->bus_resume_flags |= (1 << 0);
 else
  host->bus_resume_flags &= ~(1 << 0);
}

extern int mmc_resume_bus(struct mmc_host *host);

extern int mmc_suspend_host(struct mmc_host *);
extern int mmc_resume_host(struct mmc_host *);

extern void mmc_power_save_host(struct mmc_host *host);
extern void mmc_power_restore_host(struct mmc_host *host);

extern void mmc_detect_change(struct mmc_host *, unsigned long delay);
extern void mmc_request_done(struct mmc_host *, struct mmc_request *);

static inline void mmc_signal_sdio_irq(struct mmc_host *host)
{
 host->ops->enable_sdio_irq(host, 0);
 wake_up_process(host->sdio_irq_thread);
}

struct regulator;

int mmc_regulator_get_ocrmask(struct regulator *supply);
int mmc_regulator_set_ocr(struct regulator *supply, unsigned short vdd_bit);

int mmc_card_awake(struct mmc_host *host);
int mmc_card_sleep(struct mmc_host *host);
int mmc_card_can_sleep(struct mmc_host *host);

int mmc_host_enable(struct mmc_host *host);
int mmc_host_disable(struct mmc_host *host);
int mmc_host_lazy_disable(struct mmc_host *host);







static inline void mmc_set_disable_delay(struct mmc_host *host,
      unsigned int disable_delay)
{
 host->disable_delay = disable_delay;
}
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/mmc.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/card.h" 1
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/card.h"
struct mmc_cid {
 unsigned int manfid;
 char prod_name[8];
 unsigned int serial;
 unsigned short oemid;
 unsigned short year;
 unsigned char hwrev;
 unsigned char fwrev;
 unsigned char month;
};

struct mmc_csd {
 unsigned char structure;
 unsigned char mmca_vsn;
 unsigned short cmdclass;
 unsigned short tacc_clks;
 unsigned int tacc_ns;
 unsigned int r2w_factor;
 unsigned int max_dtr;
 unsigned int read_blkbits;
 unsigned int write_blkbits;
 unsigned int capacity;
 unsigned int read_partial:1,
    read_misalign:1,
    write_partial:1,
    write_misalign:1;
};

struct mmc_ext_csd {
 u8 rev;
 unsigned int sa_timeout;
 unsigned int hs_max_dtr;
 unsigned int sectors;
};

struct sd_scr {
 unsigned char sda_vsn;
 unsigned char bus_widths;


};

struct sd_switch_caps {
 unsigned int hs_max_dtr;
};

struct sdio_cccr {
 unsigned int sdio_vsn;
 unsigned int sd_vsn;
 unsigned int multi_block:1,
    low_speed:1,
    wide_bus:1,
    high_power:1,
    high_speed:1,
    disable_cd:1;
};

struct sdio_cis {
 unsigned short vendor;
 unsigned short device;
 unsigned short blksize;
 unsigned int max_dtr;
};

struct mmc_host;
struct sdio_func;
struct sdio_func_tuple;






struct mmc_card {
 struct mmc_host *host;
 struct device dev;
 unsigned int rca;
 unsigned int type;



 unsigned int state;




 unsigned int quirks;




 u32 raw_cid[4];
 u32 raw_csd[4];
 u32 raw_scr[2];
 struct mmc_cid cid;
 struct mmc_csd csd;
 struct mmc_ext_csd ext_csd;
 struct sd_scr scr;
 struct sd_switch_caps sw_caps;

 unsigned int sdio_funcs;
 struct sdio_cccr cccr;
 struct sdio_cis cis;
 struct sdio_func *sdio_func[7];
 unsigned num_info;
 const char **info;
 struct sdio_func_tuple *tuples;

 struct dentry *debugfs_root;
};
# 140 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/card.h"
static inline int mmc_card_lenient_fn0(const struct mmc_card *c)
{
 return c->quirks & (1<<0);
}

static inline int mmc_blksz_for_byte_mode(const struct mmc_card *c)
{
 return c->quirks & (1<<1);
}
# 160 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/card.h"
struct mmc_driver {
 struct device_driver drv;
 int (*probe)(struct mmc_card *);
 void (*remove)(struct mmc_card *);
 int (*suspend)(struct mmc_card *, pm_message_t);
 int (*resume)(struct mmc_card *);
};

extern int mmc_register_driver(struct mmc_driver *);
extern void mmc_unregister_driver(struct mmc_driver *);
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/mmc.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/sdio_func.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/sdio_func.h"
struct mmc_card;
struct sdio_func;

typedef void (sdio_irq_handler_t)(struct sdio_func *);




struct sdio_embedded_func {
 uint8_t f_class;
 uint32_t f_maxblksize;
};




struct sdio_func_tuple {
 struct sdio_func_tuple *next;
 unsigned char code;
 unsigned char size;
 unsigned char data[0];
};




struct sdio_func {
 struct mmc_card *card;
 struct device dev;
 sdio_irq_handler_t *irq_handler;
 unsigned int num;

 unsigned char class;
 unsigned short vendor;
 unsigned short device;

 unsigned max_blksize;
 unsigned cur_blksize;

 unsigned enable_timeout;

 unsigned int state;


 u8 tmpbuf[4];

 unsigned num_info;
 const char **info;

 struct sdio_func_tuple *tuples;
};
# 85 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/sdio_func.h"
struct sdio_driver {
 char *name;
 const struct sdio_device_id *id_table;

 int (*probe)(struct sdio_func *, const struct sdio_device_id *);
 void (*remove)(struct sdio_func *);

 struct device_driver drv;
};
# 121 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mmc/sdio_func.h"
extern int sdio_register_driver(struct sdio_driver *);
extern void sdio_unregister_driver(struct sdio_driver *);




extern void sdio_claim_host(struct sdio_func *func);
extern void sdio_release_host(struct sdio_func *func);

extern int sdio_enable_func(struct sdio_func *func);
extern int sdio_disable_func(struct sdio_func *func);

extern int sdio_set_block_size(struct sdio_func *func, unsigned blksz);

extern int sdio_claim_irq(struct sdio_func *func, sdio_irq_handler_t *handler);
extern int sdio_release_irq(struct sdio_func *func);

extern unsigned int sdio_align_size(struct sdio_func *func, unsigned int sz);

extern u8 sdio_readb(struct sdio_func *func, unsigned int addr, int *err_ret);
extern u8 sdio_readb_ext(struct sdio_func *func, unsigned int addr, int *err_ret,
 unsigned in);
extern u16 sdio_readw(struct sdio_func *func, unsigned int addr, int *err_ret);
extern u32 sdio_readl(struct sdio_func *func, unsigned int addr, int *err_ret);

extern int sdio_memcpy_fromio(struct sdio_func *func, void *dst,
 unsigned int addr, int count);
extern int sdio_readsb(struct sdio_func *func, void *dst,
 unsigned int addr, int count);

extern void sdio_writeb(struct sdio_func *func, u8 b,
 unsigned int addr, int *err_ret);
extern void sdio_writew(struct sdio_func *func, u16 b,
 unsigned int addr, int *err_ret);
extern void sdio_writel(struct sdio_func *func, u32 b,
 unsigned int addr, int *err_ret);

extern u8 sdio_writeb_readb(struct sdio_func *func, u8 write_byte,
 unsigned int addr, int *err_ret);

extern int sdio_memcpy_toio(struct sdio_func *func, unsigned int addr,
 void *src, int count);
extern int sdio_writesb(struct sdio_func *func, unsigned int addr,
 void *src, int count);

extern unsigned char sdio_f0_readb(struct sdio_func *func,
 unsigned int addr, int *err_ret);
extern void sdio_f0_writeb(struct sdio_func *func, unsigned char b,
 unsigned int addr, int *err_ret);

extern mmc_pm_flag_t sdio_get_host_pm_caps(struct sdio_func *func);
extern int sdio_set_host_pm_flags(struct sdio_func *func, mmc_pm_flag_t flags);
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/mach/mmc.h" 2

struct embedded_sdio_data {
        struct sdio_cis cis;
        struct sdio_cccr cccr;
        struct sdio_embedded_func *funcs;
        int num_funcs;
};

struct mmc_platform_data {
 unsigned int ocr_mask;
 u32 (*translate_vdd)(struct device *, unsigned int);
 unsigned int (*status)(struct device *);
        unsigned int status_irq;
        struct embedded_sdio_data *embedded_sdio;
        unsigned int sdiowakeup_irq;
 int (*register_status_notify)(void (*callback)(int card_present, void *dev_id), void *dev_id);
        unsigned long irq_flags;
        unsigned long mmc_bus_width;
        int (*wpswitch) (struct device *);
 int dummy52_required;
 unsigned int msmsdcc_fmin;
 unsigned int msmsdcc_fmid;
 unsigned int msmsdcc_fmax;
 bool nonremovable;
 bool pclk_src_dfab;
 int (*cfg_mpm_sdiowakeup)(struct device *, bool);
};
# 38 "board-zte-blade.c" 2
# 1 "./include/mach/vreg.h" 1
# 20 "./include/mach/vreg.h"
struct vreg;

struct vreg *vreg_get(struct device *dev, const char *id);
void vreg_put(struct vreg *vreg);

int vreg_enable(struct vreg *vreg);
int vreg_disable(struct vreg *vreg);
int vreg_set_level(struct vreg *vreg, unsigned mv);
# 39 "board-zte-blade.c" 2
# 1 "./include/mach/mpp.h" 1
# 40 "./include/mach/mpp.h"
enum {
 MPP_DLOGIC_LVL_MSME,
 MPP_DLOGIC_LVL_MSMP,
 MPP_DLOGIC_LVL_RUIM,
 MPP_DLOGIC_LVL_MMC,
 MPP_DLOGIC_LVL_VDD,
};


enum {
 MPP_DLOGIC_OUT_CTRL_LOW,
 MPP_DLOGIC_OUT_CTRL_HIGH,
 MPP_DLOGIC_OUT_CTRL_MPP,
 MPP_DLOGIC_OUT_CTRL_NOT_MPP,
};


enum {
 MPP_DLOGIC_IN_DBUS_NONE,
 MPP_DLOGIC_IN_DBUS_1,
 MPP_DLOGIC_IN_DBUS_2,
 MPP_DLOGIC_IN_DBUS_3,
};







int mpp_config_digital_out(unsigned mpp, unsigned config);
int mpp_config_digital_in(unsigned mpp, unsigned config);
# 80 "./include/mach/mpp.h"
static inline int pm8058_mpp_config(unsigned mpp, unsigned type,
        unsigned level, unsigned control)
{
 return -22;
}






static inline int pm8901_mpp_config(unsigned mpp, unsigned type,
        unsigned level, unsigned control)
{
 return -22;
}
# 195 "./include/mach/mpp.h"
static inline int pm8058_mpp_config_digital_in(unsigned mpp, unsigned level,
            unsigned control)
{
 return pm8058_mpp_config(mpp, 0, level, control);
}

static inline int pm8058_mpp_config_digital_out(unsigned mpp, unsigned level,
      unsigned control)
{
 return pm8058_mpp_config(mpp, 1, level, control);
}

static inline int pm8058_mpp_config_bi_dir(unsigned mpp, unsigned level,
        unsigned control)
{
 return pm8058_mpp_config(mpp, 2, level, control);
}

static inline int pm8058_mpp_config_analog_input(unsigned mpp, unsigned level,
       unsigned control)
{
 return pm8058_mpp_config(mpp, 3, level, control);
}

static inline int pm8058_mpp_config_analog_output(unsigned mpp, unsigned level,
        unsigned control)
{
 return pm8058_mpp_config(mpp, 4, level, control);
}

static inline int pm8058_mpp_config_current_sink(unsigned mpp, unsigned level,
       unsigned control)
{
 return pm8058_mpp_config(mpp, 5, level, control);
}

static inline int pm8058_mpp_config_dtest_sink(unsigned mpp, unsigned level,
            unsigned control)
{
 return pm8058_mpp_config(mpp, 6, level, control);
}

static inline int pm8058_mpp_config_dtest_output(unsigned mpp, unsigned level,
       unsigned control)
{
 return pm8058_mpp_config(mpp, 7,
     level, control);
}

static inline int pm8901_mpp_config_digital_in(unsigned mpp, unsigned level,
            unsigned control)
{
 return pm8901_mpp_config(mpp, 0, level, control);
}

static inline int pm8901_mpp_config_digital_out(unsigned mpp, unsigned level,
      unsigned control)
{
 return pm8901_mpp_config(mpp, 1, level, control);
}

static inline int pm8901_mpp_config_bi_dir(unsigned mpp, unsigned level,
        unsigned control)
{
 return pm8901_mpp_config(mpp, 2, level, control);
}

static inline int pm8901_mpp_config_analog_input(unsigned mpp, unsigned level,
       unsigned control)
{
 return pm8901_mpp_config(mpp, 3, level, control);
}

static inline int pm8901_mpp_config_analog_output(unsigned mpp, unsigned level,
        unsigned control)
{
 return pm8901_mpp_config(mpp, 4, level, control);
}

static inline int pm8901_mpp_config_current_sink(unsigned mpp, unsigned level,
       unsigned control)
{
 return pm8901_mpp_config(mpp, 5, level, control);
}

static inline int pm8901_mpp_config_dtest_sink(unsigned mpp, unsigned level,
            unsigned control)
{
 return pm8901_mpp_config(mpp, 6, level, control);
}

static inline int pm8901_mpp_config_dtest_output(unsigned mpp, unsigned level,
       unsigned control)
{
 return pm8901_mpp_config(mpp, 7,
     level, control);
}
# 40 "board-zte-blade.c" 2
# 1 "./include/mach/gpio.h" 1
# 24 "./include/mach/gpio.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/gpio.h" 1
# 188 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/gpio.h"
static inline int gpio_is_valid(int number)
{

 return number >= 0;
}





static inline int gpio_cansleep(unsigned gpio)
{
 return 0;
}

static inline int gpio_get_value_cansleep(unsigned gpio)
{
 might_sleep();
 return gpio_get_value(gpio);
}

static inline void gpio_set_value_cansleep(unsigned gpio, int value)
{
 might_sleep();
 gpio_set_value(gpio, value);
}





struct device;



static inline int gpio_export(unsigned gpio, bool direction_may_change)
{
 return -38;
}

static inline int gpio_export_link(struct device *dev, const char *name,
    unsigned gpio)
{
 return -38;
}

static inline int gpio_sysfs_set_active_low(unsigned gpio, int value)
{
 return -38;
}

static inline void gpio_unexport(unsigned gpio)
{
}
# 25 "./include/mach/gpio.h" 2




static inline int gpio_get_value(unsigned gpio)
{
 return __gpio_get_value(gpio);
}

static inline void gpio_set_value(unsigned gpio, int value)
{
 __gpio_set_value(gpio, value);
}

static inline int gpio_cansleep(unsigned gpio)
{
 return __gpio_cansleep(gpio);
}

static inline int gpio_to_irq(unsigned gpio)
{
 return __gpio_to_irq(gpio);
}
# 58 "./include/mach/gpio.h"
struct msm_gpio {
 u32 gpio_cfg;
 const char *label;
};
# 73 "./include/mach/gpio.h"
int msm_gpios_request_enable(const struct msm_gpio *table, int size);







void msm_gpios_disable_free(const struct msm_gpio *table, int size);
# 91 "./include/mach/gpio.h"
int msm_gpios_request(const struct msm_gpio *table, int size);







void msm_gpios_free(const struct msm_gpio *table, int size);
# 109 "./include/mach/gpio.h"
int msm_gpios_enable(const struct msm_gpio *table, int size);







int msm_gpios_disable(const struct msm_gpio *table, int size);





void msm_gpio_show_resume_irq(void);






enum {
 GPIO_CFG_INPUT,
 GPIO_CFG_OUTPUT,
};


enum {
 GPIO_CFG_NO_PULL,
 GPIO_CFG_PULL_DOWN,
 GPIO_CFG_KEEPER,
 GPIO_CFG_PULL_UP,
};


enum {
 GPIO_CFG_2MA,
 GPIO_CFG_4MA,
 GPIO_CFG_6MA,
 GPIO_CFG_8MA,
 GPIO_CFG_10MA,
 GPIO_CFG_12MA,
 GPIO_CFG_14MA,
 GPIO_CFG_16MA,
};

enum {
 GPIO_CFG_ENABLE,
 GPIO_CFG_DISABLE,
};
# 176 "./include/mach/gpio.h"
int gpio_tlmm_config(unsigned config, unsigned disable);

enum msm_tlmm_hdrive_tgt {
 TLMM_HDRV_SDC4_CLK = 0,
 TLMM_HDRV_SDC4_CMD,
 TLMM_HDRV_SDC4_DATA,
 TLMM_HDRV_SDC3_CLK,
 TLMM_HDRV_SDC3_CMD,
 TLMM_HDRV_SDC3_DATA,
};

enum msm_tlmm_pull_tgt {
 TLMM_PULL_SDC4_CMD = 0,
 TLMM_PULL_SDC4_DATA,
 TLMM_PULL_SDC3_CMD,
 TLMM_PULL_SDC3_DATA,
};
# 222 "./include/mach/gpio.h"
static inline void msm_tlmm_set_hdrive(enum msm_tlmm_hdrive_tgt tgt,
           int drv_str) {}
static inline void msm_tlmm_set_pull(enum msm_tlmm_pull_tgt tgt, int pull) {}
static inline int msm_gpio_install_direct_irq(unsigned gpio, unsigned irq,
      unsigned int input_polarity)
{
 return -38;
}
# 41 "board-zte-blade.c" 2
# 1 "./include/mach/board.h" 1
# 23 "./include/mach/board.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h" 1
# 150 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_ctrlrequest {
 __u8 bRequestType;
 __u8 bRequest;
 __le16 wValue;
 __le16 wIndex;
 __le16 wLength;
} __attribute__ ((packed));
# 214 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_descriptor_header {
 __u8 bLength;
 __u8 bDescriptorType;
} __attribute__ ((packed));





struct usb_device_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __le16 bcdUSB;
 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;
 __u8 bMaxPacketSize0;
 __le16 idVendor;
 __le16 idProduct;
 __le16 bcdDevice;
 __u8 iManufacturer;
 __u8 iProduct;
 __u8 iSerialNumber;
 __u8 bNumConfigurations;
} __attribute__ ((packed));
# 279 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_config_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __le16 wTotalLength;
 __u8 bNumInterfaces;
 __u8 bConfigurationValue;
 __u8 iConfiguration;
 __u8 bmAttributes;
 __u8 bMaxPower;
} __attribute__ ((packed));
# 302 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_string_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __le16 wData[1];
} __attribute__ ((packed));
# 316 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_interface_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bInterfaceNumber;
 __u8 bAlternateSetting;
 __u8 bNumEndpoints;
 __u8 bInterfaceClass;
 __u8 bInterfaceSubClass;
 __u8 bInterfaceProtocol;
 __u8 iInterface;
} __attribute__ ((packed));






struct usb_endpoint_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bEndpointAddress;
 __u8 bmAttributes;
 __le16 wMaxPacketSize;
 __u8 bInterval;



 __u8 bRefresh;
 __u8 bSynchAddress;
} __attribute__ ((packed));
# 380 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_num(const struct usb_endpoint_descriptor *epd)
{
 return epd->bEndpointAddress & 0x0f;
}
# 392 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_type(const struct usb_endpoint_descriptor *epd)
{
 return epd->bmAttributes & 0x03;
}







static inline int usb_endpoint_dir_in(const struct usb_endpoint_descriptor *epd)
{
 return ((epd->bEndpointAddress & 0x80) == 0x80);
}







static inline int usb_endpoint_dir_out(
    const struct usb_endpoint_descriptor *epd)
{
 return ((epd->bEndpointAddress & 0x80) == 0);
}







static inline int usb_endpoint_xfer_bulk(
    const struct usb_endpoint_descriptor *epd)
{
 return ((epd->bmAttributes & 0x03) ==
  2);
}







static inline int usb_endpoint_xfer_control(
    const struct usb_endpoint_descriptor *epd)
{
 return ((epd->bmAttributes & 0x03) ==
  0);
}
# 453 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_xfer_int(
    const struct usb_endpoint_descriptor *epd)
{
 return ((epd->bmAttributes & 0x03) ==
  3);
}
# 467 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_xfer_isoc(
    const struct usb_endpoint_descriptor *epd)
{
 return ((epd->bmAttributes & 0x03) ==
  1);
}
# 481 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_is_bulk_in(
    const struct usb_endpoint_descriptor *epd)
{
 return usb_endpoint_xfer_bulk(epd) && usb_endpoint_dir_in(epd);
}
# 494 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_is_bulk_out(
    const struct usb_endpoint_descriptor *epd)
{
 return usb_endpoint_xfer_bulk(epd) && usb_endpoint_dir_out(epd);
}
# 507 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_is_int_in(
    const struct usb_endpoint_descriptor *epd)
{
 return usb_endpoint_xfer_int(epd) && usb_endpoint_dir_in(epd);
}
# 520 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_is_int_out(
    const struct usb_endpoint_descriptor *epd)
{
 return usb_endpoint_xfer_int(epd) && usb_endpoint_dir_out(epd);
}
# 533 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_is_isoc_in(
    const struct usb_endpoint_descriptor *epd)
{
 return usb_endpoint_xfer_isoc(epd) && usb_endpoint_dir_in(epd);
}
# 546 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
static inline int usb_endpoint_is_isoc_out(
    const struct usb_endpoint_descriptor *epd)
{
 return usb_endpoint_xfer_isoc(epd) && usb_endpoint_dir_out(epd);
}




struct usb_ss_ep_comp_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bMaxBurst;
 __u8 bmAttributes;
 __u16 wBytesPerInterval;
} __attribute__ ((packed));
# 571 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_qualifier_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __le16 bcdUSB;
 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;
 __u8 bMaxPacketSize0;
 __u8 bNumConfigurations;
 __u8 bRESERVED;
} __attribute__ ((packed));





struct usb_otg_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bmAttributes;
 __le16 bcdOTG;
} __attribute__ ((packed));
# 604 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
struct usb_debug_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;


 __u8 bDebugInEndpoint;
 __u8 bDebugOutEndpoint;
} __attribute__((packed));




struct usb_interface_assoc_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bFirstInterface;
 __u8 bInterfaceCount;
 __u8 bFunctionClass;
 __u8 bFunctionSubClass;
 __u8 bFunctionProtocol;
 __u8 iFunction;
} __attribute__ ((packed));







struct usb_security_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __le16 wTotalLength;
 __u8 bNumEncryptionTypes;
} __attribute__((packed));






struct usb_key_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 tTKID[3];
 __u8 bReserved;
 __u8 bKeyData[0];
} __attribute__((packed));




struct usb_encryption_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bEncryptionType;




 __u8 bEncryptionValue;
 __u8 bAuthKeyIndex;
} __attribute__((packed));





struct usb_bos_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __le16 wTotalLength;
 __u8 bNumDeviceCaps;
} __attribute__((packed));




struct usb_dev_cap_header {
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;
} __attribute__((packed));



struct usb_wireless_cap_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;

 __u8 bmAttributes;





 __le16 wPHYRates;
# 715 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/ch9.h"
 __u8 bmTFITXPowerInfo;
 __u8 bmFFITXPowerInfo;
 __le16 bmBandGroup;
 __u8 bReserved;
} __attribute__((packed));



struct usb_ext_cap_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
 __u8 bDevCapabilityType;
 __u8 bmAttributes;

} __attribute__((packed));






struct usb_wireless_ep_comp_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;

 __u8 bMaxBurst;
 __u8 bMaxSequence;
 __le16 wMaxStreamDelay;
 __le16 wOverTheAirPacketSize;
 __u8 bOverTheAirInterval;
 __u8 bmCompAttributes;




} __attribute__((packed));







struct usb_handshake {
 __u8 bMessageNumber;
 __u8 bStatus;
 __u8 tTKID[3];
 __u8 bReserved;
 __u8 CDID[16];
 __u8 nonce[16];
 __u8 MIC[8];
} __attribute__((packed));







struct usb_connection_context {
 __u8 CHID[16];
 __u8 CDID[16];
 __u8 CK[16];
} __attribute__((packed));





enum usb_device_speed {
 USB_SPEED_UNKNOWN = 0,
 USB_SPEED_LOW, USB_SPEED_FULL,
 USB_SPEED_HIGH,
 USB_SPEED_WIRELESS,
 USB_SPEED_SUPER,
};

enum usb_device_state {



 USB_STATE_NOTATTACHED = 0,


 USB_STATE_ATTACHED,
 USB_STATE_POWERED,
 USB_STATE_RECONNECTING,
 USB_STATE_UNAUTHENTICATED,
 USB_STATE_DEFAULT,
 USB_STATE_ADDRESS,
 USB_STATE_CONFIGURED,

 USB_STATE_SUSPENDED







};
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb.h" 2
# 24 "./include/mach/board.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds-pmic8058.h" 1
# 32 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/leds-pmic8058.h"
enum pmic8058_leds {
 PMIC8058_ID_LED_KB_LIGHT = 1,
 PMIC8058_ID_LED_0,
 PMIC8058_ID_LED_1,
 PMIC8058_ID_LED_2,
 PMIC8058_ID_FLASH_LED_0,
 PMIC8058_ID_FLASH_LED_1,
};

struct pmic8058_led {
 const char *name;
 const char *default_trigger;
 unsigned max_brightness;
 int id;
};

struct pmic8058_leds_platform_data {
 int num_leds;
 struct pmic8058_led *leds;
};

int pm8058_set_flash_led_current(enum pmic8058_leds id, unsigned mA);
int pm8058_set_led_current(enum pmic8058_leds id, unsigned mA);
# 25 "./include/mach/board.h" 2




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/clkdev.h" 1
# 15 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/clkdev.h"
struct clk;
struct device;

struct clk_lookup {
 struct list_head node;
 const char *dev_id;
 const char *con_id;
 struct clk *clk;
};

struct clk_lookup *clkdev_alloc(struct clk *clk, const char *con_id,
 const char *dev_fmt, ...);

void clkdev_add(struct clk_lookup *cl);
void clkdev_drop(struct clk_lookup *cl);

void clkdev_add_table(struct clk_lookup *, size_t);
int clk_add_alias(const char *, const char *, char *, struct device *);
# 30 "./include/mach/board.h" 2


struct msm_acpu_clock_platform_data {
 uint32_t acpu_switch_time_us;
 uint32_t max_speed_delta_khz;
 uint32_t vdd_switch_time_us;
 unsigned int max_axi_khz;
 unsigned int max_vdd;
 int (*acpu_set_vdd) (int mvolts);
};

struct msm_camera_io_ext {
 uint32_t mdcphy;
 uint32_t mdcsz;
 uint32_t appphy;
 uint32_t appsz;
 uint32_t camifpadphy;
 uint32_t camifpadsz;
 uint32_t csiphy;
 uint32_t csisz;
 uint32_t csiirq;
};

struct msm_camera_io_clk {
 uint32_t mclk_clk_rate;
 uint32_t vfe_clk_rate;
};

struct msm_camera_device_platform_data {
 int (*camera_gpio_on) (void);
 void (*camera_gpio_off)(void);
 struct msm_camera_io_ext ioext;
 struct msm_camera_io_clk ioclk;
};
enum msm_camera_csi_data_format {
 CSI_8BIT,
 CSI_10BIT,
 CSI_12BIT,
};
struct msm_camera_csi_params {
 enum msm_camera_csi_data_format data_format;
 uint8_t lane_cnt;
 uint8_t lane_assign;
 uint8_t settle_cnt;
 uint8_t dpcm_scheme;
};
# 106 "./include/mach/board.h"
struct msm_camera_sensor_flash_pmic {
 uint8_t num_of_src;
 uint32_t low_current;
 uint32_t high_current;
 enum pmic8058_leds led_src_1;
 enum pmic8058_leds led_src_2;
 int (*pmic_set_current)(enum pmic8058_leds id, unsigned mA);
};

struct msm_camera_sensor_flash_pwm {
 uint32_t freq;
 uint32_t max_load;
 uint32_t low_load;
 uint32_t high_load;
 uint32_t channel;
};

struct pmic8058_leds_platform_data;
struct msm_camera_sensor_flash_current_driver {
 uint32_t low_current;
 uint32_t high_current;
 const struct pmic8058_leds_platform_data *driver_channel;
};

struct msm_camera_sensor_flash_src {
 int flash_sr_type;

 union {
  struct msm_camera_sensor_flash_pmic pmic_src;
  struct msm_camera_sensor_flash_pwm pwm_src;
  struct msm_camera_sensor_flash_current_driver
   current_driver_src;
 } _fsrc;
};

struct msm_camera_sensor_flash_data {
 int flash_type;
 struct msm_camera_sensor_flash_src *flash_src;
};

struct msm_camera_sensor_strobe_flash_data {
 uint8_t flash_trigger;
 uint8_t flash_charge;
 uint8_t flash_charge_done;
 uint32_t flash_recharge_duration;
 uint32_t irq;
 spinlock_t spin_lock;
 spinlock_t timer_lock;
 int state;
};

struct msm_camera_sensor_info {
 const char *sensor_name;
 int sensor_reset;
 int sensor_pwd;
 int vcm_pwd;
 int vcm_enable;
 int mclk;
 int flash_type;
 struct msm_camera_device_platform_data *pdata;
 struct resource *resource;
 uint8_t num_resources;
 struct msm_camera_sensor_flash_data *flash_data;
 int csi_if;
 struct msm_camera_csi_params csi_params;
 struct msm_camera_sensor_strobe_flash_data *strobe_flash_data;
};

struct clk;

struct snd_endpoint {
 int id;
 const char *name;
};

struct msm_snd_endpoints {
 struct snd_endpoint *endpoints;
 unsigned num;
};






enum msm_adspdec_concurrency {
 MSM_ADSP_CODEC_WAV = 0,
 MSM_ADSP_CODEC_ADPCM = 1,
 MSM_ADSP_CODEC_MP3 = 2,
 MSM_ADSP_CODEC_REALAUDIO = 3,
 MSM_ADSP_CODEC_WMA = 4,
 MSM_ADSP_CODEC_AAC = 5,
 MSM_ADSP_CODEC_RESERVED = 6,
 MSM_ADSP_CODEC_MIDI = 7,
 MSM_ADSP_CODEC_YADPCM = 8,
 MSM_ADSP_CODEC_QCELP = 9,
 MSM_ADSP_CODEC_AMRNB = 10,
 MSM_ADSP_CODEC_AMRWB = 11,
 MSM_ADSP_CODEC_EVRC = 12,
 MSM_ADSP_CODEC_WMAPRO = 13,
 MSM_ADSP_MODE_TUNNEL = 24,
 MSM_ADSP_MODE_NONTUNNEL = 25,
 MSM_ADSP_MODE_LP = 26,
 MSM_ADSP_OP_DMA = 28,
 MSM_ADSP_OP_DM = 29,
};

struct msm_adspdec_info {
 const char *module_name;
 unsigned module_queueid;
 int module_decid;
 unsigned nr_codec_support;
};




struct dec_instance_table {
 uint8_t max_instances_same_dec;
 uint8_t max_instances_diff_dec;
};

struct msm_adspdec_database {
 unsigned num_dec;
 unsigned num_concurrency_support;
 unsigned int *dec_concurrency_table;

 struct msm_adspdec_info *dec_info_list;
 struct dec_instance_table *dec_instance_list;
};

struct msm_panel_common_pdata {
 uintptr_t hw_revision_addr;
 int gpio;
 int (*backlight_level)(int level, int max, int min);
 int (*pmic_backlight)(int level);
 int (*panel_num)(void);
 void (*panel_config_gpio)(int);
 int (*vga_switch)(int select_vga);
 int *gpio_num;
 int mdp_core_clk_rate;
 unsigned num_mdp_clk;
 int *mdp_core_clk_table;



};

struct lcdc_platform_data {
 int (*lcdc_gpio_config)(int on);
 int (*lcdc_power_save)(int);
 unsigned int (*lcdc_get_clk)(void);



};

struct tvenc_platform_data {
 int poll;
 int (*pm_vid_en)(int on);



};

struct mddi_platform_data {
 int (*mddi_power_save)(int on);
 int (*mddi_sel_clk)(u32 *clk_rate);
 int (*mddi_client_power)(u32 client_id);
};

struct mipi_dsi_platform_data {
 int vsync_gpio;
 int (*dsi_power_save)(int on);
};

struct msm_fb_platform_data {
 int (*detect_client)(const char *name);
 int mddi_prescan;
 int (*allow_set_offset)(void);
};

struct msm_hdmi_platform_data {
 int irq;
 int (*cable_detect)(int insert);
 int (*comm_power)(int on, int show);
 int (*enable_5v)(int on);
 int (*core_power)(int on, int show);
 int (*cec_power)(int on);
 int (*init_irq)(void);
 bool (*check_hdcp_hw_support)(void);
};

struct msm_i2c_platform_data {
 int clk_freq;
 uint32_t rmutex;
 const char *rsl_id;
 uint32_t pm_lat;
 int pri_clk;
 int pri_dat;
 int aux_clk;
 int aux_dat;
 const char *clk;
 const char *pclk;
 int src_clk_rate;
 int use_gsbi_shared_mode;
 void (*msm_i2c_config_gpio)(int iface, int config_type);
};

enum msm_ssbi_controller_type {
 MSM_SBI_CTRL_SSBI = 0,
 MSM_SBI_CTRL_SSBI2,
 MSM_SBI_CTRL_PMIC_ARBITER,
};

struct msm_ssbi_platform_data {
 const char *rsl_id;
 enum msm_ssbi_controller_type controller_type;
};
# 334 "./include/mach/board.h"
void __attribute__ ((__section__(".init.text"))) notrace msm_add_devices(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_map_common_io(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_map_qsd8x50_io(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_map_msm8x60_io(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_map_msm7x30_io(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_map_comet_io(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_init_irq(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_clock_init(struct clk_lookup *clock_tbl, unsigned num_clocks);
void __attribute__ ((__section__(".init.text"))) notrace msm_acpu_clock_init(struct msm_acpu_clock_platform_data *);

struct mmc_platform_data;
int __attribute__ ((__section__(".init.text"))) notrace msm_add_sdcc(unsigned int controller,
  struct mmc_platform_data *plat);

struct msm_usb_host_platform_data;
int __attribute__ ((__section__(".init.text"))) notrace msm_add_host(unsigned int host,
  struct msm_usb_host_platform_data *plat);




static inline void msm_hsusb_set_vbus_state(int online) {}


void __attribute__ ((__section__(".init.text"))) notrace msm_snddev_init(void);
void __attribute__ ((__section__(".init.text"))) notrace msm_snddev_init_timpani(void);
void msm_snddev_poweramp_on(void);
void msm_snddev_poweramp_off(void);
void msm_snddev_hsed_voltage_on(void);
void msm_snddev_hsed_voltage_off(void);
void msm_snddev_tx_route_config(void);
void msm_snddev_tx_route_deconfig(void);

extern unsigned int msm_shared_ram_phys;
# 42 "board-zte-blade.c" 2
# 1 "./include/mach/msm_iomap.h" 1
# 53 "./include/mach/msm_iomap.h"
# 1 "./include/mach/msm_iomap-7xxx.h" 1
# 54 "./include/mach/msm_iomap.h" 2
# 43 "board-zte-blade.c" 2
# 1 "./include/mach/msm_rpcrouter.h" 1
# 42 "./include/mach/msm_rpcrouter.h"
struct msm_rpc_endpoint;

struct rpcsvr_platform_device
{
 struct platform_device base;
 uint32_t prog;
 uint32_t vers;
};







struct rpc_request_hdr
{
 uint32_t xid;
 uint32_t type;
 uint32_t rpc_vers;
 uint32_t prog;
 uint32_t vers;
 uint32_t procedure;
 uint32_t cred_flavor;
 uint32_t cred_length;
 uint32_t verf_flavor;
 uint32_t verf_length;
};

typedef struct
{
 uint32_t low;
 uint32_t high;
} rpc_reply_progmismatch_data;

typedef struct
{
} rpc_denied_reply_hdr;

typedef struct
{
 uint32_t verf_flavor;
 uint32_t verf_length;
 uint32_t accept_stat;
# 99 "./include/mach/msm_rpcrouter.h"
} rpc_accepted_reply_hdr;

struct rpc_reply_hdr
{
 uint32_t xid;
 uint32_t type;
 uint32_t reply_stat;


 union {
  rpc_accepted_reply_hdr acc_hdr;
  rpc_denied_reply_hdr dny_hdr;
 } data;
};

struct rpc_board_dev {
 uint32_t prog;
 struct platform_device pdev;
};





struct msm_rpc_endpoint *msm_rpc_open(void);

struct msm_rpc_endpoint *msm_rpc_connect(uint32_t prog, uint32_t vers, unsigned flags);

struct msm_rpc_endpoint *msm_rpc_connect_compatible(uint32_t prog,
 uint32_t vers, unsigned flags);

int msm_rpc_is_compatible_version(uint32_t server_version,
      uint32_t client_version);

int msm_rpc_close(struct msm_rpc_endpoint *ept);
int msm_rpc_write(struct msm_rpc_endpoint *ept,
    void *data, int len);
int msm_rpc_read(struct msm_rpc_endpoint *ept,
   void **data, unsigned len, long timeout);
void msm_rpc_read_wakeup(struct msm_rpc_endpoint *ept);
void msm_rpc_setup_req(struct rpc_request_hdr *hdr,
         uint32_t prog, uint32_t vers, uint32_t proc);
int msm_rpc_register_server(struct msm_rpc_endpoint *ept,
       uint32_t prog, uint32_t vers);
int msm_rpc_unregister_server(struct msm_rpc_endpoint *ept,
         uint32_t prog, uint32_t vers);

int msm_rpc_add_board_dev(struct rpc_board_dev *board_dev, int num);

int msm_rpc_clear_netreset(struct msm_rpc_endpoint *ept);

int msm_rpc_get_curr_pkt_size(struct msm_rpc_endpoint *ept);







int msm_rpc_call_reply(struct msm_rpc_endpoint *ept, uint32_t proc,
         void *request, int request_size,
         void *reply, int reply_max_size,
         long timeout);
int msm_rpc_call(struct msm_rpc_endpoint *ept, uint32_t proc,
   void *request, int request_size,
   long timeout);

struct msm_rpc_xdr {
 void *in_buf;
 uint32_t in_size;
 uint32_t in_index;
 wait_queue_head_t in_buf_wait_q;

 void *out_buf;
 uint32_t out_size;
 uint32_t out_index;
 struct mutex out_lock;

 struct msm_rpc_endpoint *ept;
};

int xdr_send_int8(struct msm_rpc_xdr *xdr, const int8_t *value);
int xdr_send_uint8(struct msm_rpc_xdr *xdr, const uint8_t *value);
int xdr_send_int16(struct msm_rpc_xdr *xdr, const int16_t *value);
int xdr_send_uint16(struct msm_rpc_xdr *xdr, const uint16_t *value);
int xdr_send_int32(struct msm_rpc_xdr *xdr, const int32_t *value);
int xdr_send_uint32(struct msm_rpc_xdr *xdr, const uint32_t *value);
int xdr_send_bytes(struct msm_rpc_xdr *xdr, const void **data, uint32_t *size);

int xdr_recv_int8(struct msm_rpc_xdr *xdr, int8_t *value);
int xdr_recv_uint8(struct msm_rpc_xdr *xdr, uint8_t *value);
int xdr_recv_int16(struct msm_rpc_xdr *xdr, int16_t *value);
int xdr_recv_uint16(struct msm_rpc_xdr *xdr, uint16_t *value);
int xdr_recv_int32(struct msm_rpc_xdr *xdr, int32_t *value);
int xdr_recv_uint32(struct msm_rpc_xdr *xdr, uint32_t *value);
int xdr_recv_bytes(struct msm_rpc_xdr *xdr, void **data, uint32_t *size);

struct msm_rpc_server
{
 struct list_head list;
 uint32_t flags;

 uint32_t prog;
 uint32_t vers;

 struct mutex cb_req_lock;

 struct msm_rpc_endpoint *cb_ept;

 struct msm_rpc_xdr cb_xdr;

 uint32_t version;

 int (*rpc_call)(struct msm_rpc_server *server,
   struct rpc_request_hdr *req, unsigned len);

 int (*rpc_call2)(struct msm_rpc_server *server,
    struct rpc_request_hdr *req,
    struct msm_rpc_xdr *xdr);
};

int msm_rpc_create_server(struct msm_rpc_server *server);
int msm_rpc_create_server2(struct msm_rpc_server *server);



struct msm_rpc_client;

struct msm_rpc_client {
 struct task_struct *read_thread;
 struct task_struct *cb_thread;

 struct msm_rpc_endpoint *ept;
 wait_queue_head_t reply_wait;

 uint32_t prog, ver;

 void *buf;

 struct msm_rpc_xdr xdr;
 struct msm_rpc_xdr cb_xdr;

 uint32_t version;

 int (*cb_func)(struct msm_rpc_client *, void *, int);
 int (*cb_func2)(struct msm_rpc_client *, struct rpc_request_hdr *req,
   struct msm_rpc_xdr *);
 void *cb_buf;
 int cb_size;

 struct list_head cb_item_list;
 struct mutex cb_item_list_lock;

 wait_queue_head_t cb_wait;
 int cb_avail;

 atomic_t next_cb_id;
 struct mutex cb_list_lock;
 struct list_head cb_list;

 uint32_t exit_flag;
 struct completion complete;
 struct completion cb_complete;

 struct mutex req_lock;
};

struct msm_rpc_client_info {
 uint32_t pid;
 uint32_t cid;
 uint32_t prog;
 uint32_t vers;
};

struct msm_rpc_client *msm_rpc_register_client(
 const char *name,
 uint32_t prog, uint32_t ver,
 uint32_t create_cb_thread,
 int (*cb_func)(struct msm_rpc_client *, void *, int));

struct msm_rpc_client *msm_rpc_register_client2(
 const char *name,
 uint32_t prog, uint32_t ver,
 uint32_t create_cb_thread,
 int (*cb_func)(struct msm_rpc_client *, struct rpc_request_hdr *req,
         struct msm_rpc_xdr *xdr));

int msm_rpc_unregister_client(struct msm_rpc_client *client);

int msm_rpc_client_req(struct msm_rpc_client *client, uint32_t proc,
         int (*arg_func)(struct msm_rpc_client *,
           void *, void *), void *arg_data,
         int (*result_func)(struct msm_rpc_client *,
       void *, void *), void *result_data,
         long timeout);

int msm_rpc_client_req2(struct msm_rpc_client *client, uint32_t proc,
   int (*arg_func)(struct msm_rpc_client *,
     struct msm_rpc_xdr *, void *),
   void *arg_data,
   int (*result_func)(struct msm_rpc_client *,
        struct msm_rpc_xdr *, void *),
   void *result_data,
   long timeout);

void *msm_rpc_start_accepted_reply(struct msm_rpc_client *client,
       uint32_t xid, uint32_t accept_status);

int msm_rpc_send_accepted_reply(struct msm_rpc_client *client, uint32_t size);

void *msm_rpc_server_start_accepted_reply(struct msm_rpc_server *server,
       uint32_t xid, uint32_t accept_status);

int msm_rpc_server_send_accepted_reply(struct msm_rpc_server *server,
           uint32_t size);

int msm_rpc_add_cb_func(struct msm_rpc_client *client, void *cb_func);

void *msm_rpc_get_cb_func(struct msm_rpc_client *client, uint32_t cb_id);

void msm_rpc_remove_cb_func(struct msm_rpc_client *client, void *cb_func);

int msm_rpc_server_cb_req(struct msm_rpc_server *server,
     struct msm_rpc_client_info *clnt_info,
     uint32_t cb_proc,
     int (*arg_func)(struct msm_rpc_server *server,
       void *buf, void *data),
     void *arg_data,
     int (*ret_func)(struct msm_rpc_server *server,
       void *buf, void *data),
     void *ret_data, long timeout);

int msm_rpc_server_cb_req2(struct msm_rpc_server *server,
      struct msm_rpc_client_info *clnt_info,
      uint32_t cb_proc,
      int (*arg_func)(struct msm_rpc_server *server,
        struct msm_rpc_xdr *xdr, void *data),
      void *arg_data,
      int (*ret_func)(struct msm_rpc_server *server,
        struct msm_rpc_xdr *xdr, void *data),
      void *ret_data, long timeout);

void msm_rpc_server_get_requesting_client(
 struct msm_rpc_client_info *clnt_info);

int xdr_send_pointer(struct msm_rpc_xdr *xdr, void **obj,
       uint32_t obj_size, void *xdr_op);

int xdr_recv_pointer(struct msm_rpc_xdr *xdr, void **obj,
       uint32_t obj_size, void *xdr_op);

int xdr_send_array(struct msm_rpc_xdr *xdr, void **addr, uint32_t *size,
     uint32_t maxsize, uint32_t elm_size, void *xdr_op);

int xdr_recv_array(struct msm_rpc_xdr *xdr, void **addr, uint32_t *size,
     uint32_t maxsize, uint32_t elm_size, void *xdr_op);

int xdr_recv_req(struct msm_rpc_xdr *xdr, struct rpc_request_hdr *req);
int xdr_recv_reply(struct msm_rpc_xdr *xdr, struct rpc_reply_hdr *reply);
int xdr_start_request(struct msm_rpc_xdr *xdr, uint32_t prog,
        uint32_t ver, uint32_t proc);
int xdr_start_accepted_reply(struct msm_rpc_xdr *xdr, uint32_t accept_status);
int xdr_send_msg(struct msm_rpc_xdr *xdr);
# 44 "board-zte-blade.c" 2
# 1 "./include/mach/msm_hsusb.h" 1
# 56 "./include/mach/msm_hsusb.h"
enum hsusb_phy_type {
 UNDEFINED,
 INTEGRATED,
 EXTERNAL,
};

enum otg_mode {
 OTG_ID = 0,
 OTG_USER_CONTROL,
 OTG_VCHG,
};


enum usb_mode {
 USB_HOST_MODE,
 USB_PERIPHERAL_MODE,
};
struct usb_function_map {
 char name[20];
 unsigned bit_pos;
};
# 86 "./include/mach/msm_hsusb.h"
enum chg_type {
 USB_CHG_TYPE__SDP,
 USB_CHG_TYPE__CARKIT,
 USB_CHG_TYPE__WALLCHARGER,
 USB_CHG_TYPE__INVALID
};

enum pre_emphasis_level {
 PRE_EMPHASIS_DEFAULT,
 PRE_EMPHASIS_DISABLE,
 PRE_EMPHASIS_WITH_10_PERCENT = (1 << 5),
 PRE_EMPHASIS_WITH_20_PERCENT = (3 << 4),
};
enum cdr_auto_reset {
 CDR_AUTO_RESET_DEFAULT,
 CDR_AUTO_RESET_ENABLE,
 CDR_AUTO_RESET_DISABLE,
};

enum se1_gate_state {
 SE1_GATING_DEFAULT,
 SE1_GATING_ENABLE,
 SE1_GATING_DISABLE,
};

enum hs_drv_amplitude {
 HS_DRV_AMPLITUDE_DEFAULT,
 HS_DRV_AMPLITUDE_ZERO_PERCENT,
 HS_DRV_AMPLITUDE_25_PERCENTI = (1 << 2),
 HS_DRV_AMPLITUDE_5_PERCENT = (1 << 3),
 HS_DRV_AMPLITUDE_75_PERCENT = (3 << 2),
};


enum usb_switch_control {
 USB_SWITCH_PERIPHERAL = 0,
 USB_SWITCH_HOST,
 USB_SWITCH_DISABLE,
};

struct msm_hsusb_gadget_platform_data {
 int *phy_init_seq;
 void (*phy_reset)(void);

 int self_powered;
 int is_phy_status_timer_on;
};

struct msm_hsusb_platform_data {
 __u16 version;
 unsigned phy_info;
 __u16 vendor_id;
 char *product_name;
 char *serial_number;
 char *manufacturer_name;
 struct usb_composition *compositions;
 int num_compositions;
 struct usb_function_map *function_map;
 int num_functions;

 int (*config_gpio)(int config);

 unsigned int soc_version;

 int (*phy_reset)(void *addr);

 unsigned int core_clk;

 int vreg5v_required;

 u32 swfi_latency;
};

struct msm_otg_platform_data {
 int (*rpc_connect)(int);
 int (*phy_reset)(void *);
 unsigned int core_clk;
 int pmic_vbus_irq;




 int usb_in_sps;
 enum pre_emphasis_level pemp_level;
 enum cdr_auto_reset cdr_autoreset;
 enum hs_drv_amplitude drv_ampl;
 enum se1_gate_state se1_gating;
 int phy_reset_sig_inverted;
 int phy_can_powercollapse;
 int pclk_required_during_lpm;





 int pclk_is_hw_gated;
 char *pclk_src_name;

 int (*ldo_init) (int init);
 int (*ldo_enable) (int enable);
 int (*ldo_set_voltage) (int mV);

 u32 swfi_latency;

 int (*pmic_vbus_notif_init) (void (*callback)(int online), int init);
 int (*pmic_id_notif_init) (void (*callback)(int online), int init);
 int (*pmic_register_vbus_sn) (void (*callback)(int online));
 void (*pmic_unregister_vbus_sn) (void (*callback)(int online));
 int (*pmic_enable_ldo) (int);
 int (*init_gpio)(int on);
 void (*setup_gpio)(enum usb_switch_control mode);
 u8 otg_mode;
 u8 usb_mode;
 void (*vbus_power) (unsigned phy_info, int on);


 void (*chg_connected)(enum chg_type chg_type);
 void (*chg_vbus_draw)(unsigned ma);
 int (*chg_init)(int init);
 int (*config_vddcx)(int high);
 int (*init_vddcx)(int init);

 struct pm_qos_request_list *pm_qos_req_dma;
};

struct msm_usb_host_platform_data {
 unsigned phy_info;
 unsigned int power_budget;
 void (*config_gpio)(unsigned int config);
 void (*vbus_power) (unsigned phy_info, int on);
 int (*vbus_init)(int init);
 struct clk *ebi1_clk;
};
# 45 "board-zte-blade.c" 2
# 1 "./include/mach/rpc_hsusb.h" 1
# 25 "./include/mach/rpc_hsusb.h"
# 1 "./include/mach/msm_otg.h" 1
# 26 "./include/mach/msm_otg.h"
struct msm_otg_transceiver {
 struct device *dev;
 struct clk *clk;
 struct clk *pclk;
 int in_lpm;
 struct msm_otg_ops *dcd_ops;
 struct msm_otg_ops *hcd_ops;
 int irq;
 int flags;
 int state;
 int active;
 void *regs;
 struct work_struct work;
 spinlock_t lock;
 struct wake_lock wlock;


 int (*set_host)(struct msm_otg_transceiver *otg,
    struct msm_otg_ops *hcd_ops);


 int (*set_peripheral)(struct msm_otg_transceiver *otg,
    struct msm_otg_ops *dcd_ops);
 int (*set_suspend)(struct msm_otg_transceiver *otg,
    int suspend);

};

struct msm_otg_ops {
 void (*request)(void *, int);
 void *handle;
};
# 67 "./include/mach/msm_otg.h"
static inline struct msm_otg_transceiver *msm_otg_get_transceiver(void)
{
 return ((void *)0);
}

static inline void msm_otg_put_transceiver(struct msm_otg_transceiver *xceiv)
{
}
# 26 "./include/mach/rpc_hsusb.h" 2
# 65 "./include/mach/rpc_hsusb.h"
static inline int msm_hsusb_rpc_connect(void) { return 0; }
static inline int msm_hsusb_phy_reset(void) { return 0; }
static inline int msm_hsusb_vbus_powerup(void) { return 0; }
static inline int msm_hsusb_vbus_shutdown(void) { return 0; }
static inline int msm_hsusb_reset_rework_installed(void) { return 0; }
static inline int msm_hsusb_enable_pmic_ulpidata0(void) { return 0; }
static inline int msm_hsusb_disable_pmic_ulpidata0(void) { return 0; }
static inline int msm_hsusb_rpc_close(void) { return 0; }

static inline int msm_chg_rpc_connect(void) { return 0; }
static inline int msm_chg_usb_charger_connected(uint32_t type) { return 0; }
static inline int msm_chg_usb_i_is_available(uint32_t sample) { return 0; }
static inline int msm_chg_usb_i_is_not_available(void) { return 0; }
static inline int msm_chg_usb_charger_disconnected(void) { return 0; }
static inline int msm_chg_rpc_close(void) { return 0; }







static inline int msm_fsusb_rpc_init(struct msm_otg_ops *ops) { return 0; }
static inline int msm_fsusb_init_phy(void) { return 0; }
static inline int msm_fsusb_reset_phy(void) { return 0; }
static inline int msm_fsusb_suspend_phy(void) { return 0; }
static inline int msm_fsusb_resume_phy(void) { return 0; }
static inline int msm_fsusb_rpc_close(void) { return 0; }
static inline int msm_fsusb_remote_dev_disconnected(void) { return 0; }
static inline int msm_fsusb_set_remote_wakeup(void) { return 0; }
static inline void msm_fsusb_rpc_deinit(void) { }
static inline int
usb_diag_update_pid_and_serial_num(uint32_t pid, const char *snum) { return 0; }
# 46 "board-zte-blade.c" 2
# 1 "./include/mach/rpc_pmapp.h" 1
# 36 "./include/mach/rpc_pmapp.h"
enum {
 PMAPP_CLOCK_ID_DO = 0,
 PMAPP_CLOCK_ID_D1,
 PMAPP_CLOCK_ID_A0,
 PMAPP_CLOCK_ID_A1,
};


enum {
 PMAPP_CLOCK_VOTE_OFF = 0,
 PMAPP_CLOCK_VOTE_ON,
 PMAPP_CLOCK_VOTE_PIN_CTRL,
};


enum {
 PMAPP_VREG_LDO22 = 14,
 PMAPP_VREG_S3 = 21,
 PMAPP_VREG_S2 = 23,
 PMAPP_VREG_S4 = 24,
};


enum {
 PMAPP_SMPS_CLK_VOTE_DONTCARE = 0,
 PMAPP_SMPS_CLK_VOTE_2P74,
 PMAPP_SMPS_CLK_VOTE_1P6,
};


enum {
 PMAPP_SMPS_MODE_VOTE_DONTCARE = 0,
 PMAPP_SMPS_MODE_VOTE_PWM,
 PMAPP_SMPS_MODE_VOTE_PFM,
 PMAPP_SMPS_MODE_VOTE_AUTO
};

int msm_pm_app_rpc_init(void(*callback)(int online));
void msm_pm_app_rpc_deinit(void(*callback)(int online));
int msm_pm_app_register_vbus_sn(void (*callback)(int online));
void msm_pm_app_unregister_vbus_sn(void (*callback)(int online));
int msm_pm_app_enable_usb_ldo(int);
int pmic_vote_3p3_pwr_sel_switch(int boost);

int pmapp_display_clock_config(uint enable);

int pmapp_clock_vote(const char *voter_id, uint clock_id, uint vote);
int pmapp_smps_clock_vote(const char *voter_id, uint vreg_id, uint vote);
int pmapp_vreg_level_vote(const char *voter_id, uint vreg_id, uint level);
int pmapp_smps_mode_vote(const char *voter_id, uint vreg_id, uint mode);
int pmapp_vreg_pincntrl_vote(const char *voter_id, uint vreg_id,
     uint clock_id, uint vote);
# 47 "board-zte-blade.c" 2
# 1 "./include/mach/msm_serial_hs.h" 1
# 18 "./include/mach/msm_serial_hs.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial_core.h" 1
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial_core.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial.h" 1
# 35 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial.h"
struct serial_struct {
 int type;
 int line;
 unsigned int port;
 int irq;
 int flags;
 int xmit_fifo_size;
 int custom_divisor;
 int baud_base;
 unsigned short close_delay;
 char io_type;
 char reserved_char[1];
 int hub6;
 unsigned short closing_wait;
 unsigned short closing_wait2;
 unsigned char *iomem_base;
 unsigned short iomem_reg_shift;
 unsigned int port_high;
 unsigned long iomap_base;
};
# 86 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial.h"
struct serial_uart_config {
 char *name;
 int dfl_xmit_fifo_size;
 int flags;
};
# 175 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial.h"
struct serial_multiport_struct {
 int irq;
 int port1;
 unsigned char mask1, match1;
 int port2;
 unsigned char mask2, match2;
 int port3;
 unsigned char mask3, match3;
 int port4;
 unsigned char mask4, match4;
 int port_monitor;
 int reserved[32];
};





struct serial_icounter_struct {
 int cts, dsr, rng, dcd;
 int rx, tx;
 int frame, overrun, parity, brk;
 int buf_overrun;
 int reserved[9];
};
# 208 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial.h"
struct serial_rs485 {
 __u32 flags;



 __u32 delay_rts_before_send;
 __u32 padding[6];

};
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/serial_core.h" 2
# 19 "./include/mach/msm_serial_hs.h" 2



struct msm_serial_hs_platform_data {
 int wakeup_irq;

 unsigned char inject_rx_on_wakeup;
 char rx_to_inject;
 int (*gpio_config)(int);
};

unsigned int msm_hs_tx_empty(struct uart_port *uport);
void msm_hs_request_clock_off(struct uart_port *uport);
void msm_hs_request_clock_on(struct uart_port *uport);
void msm_hs_set_mctrl(struct uart_port *uport,
        unsigned int mctrl);
# 48 "board-zte-blade.c" 2
# 1 "./include/mach/memory.h" 1
# 49 "board-zte-blade.c" 2
# 1 "./include/mach/msm_battery.h" 1
# 37 "./include/mach/msm_battery.h"
struct msm_psy_batt_pdata {
 u32 voltage_max_design;
 u32 voltage_min_design;
 u32 avail_chg_sources;
 u32 batt_technology;
 u32 (*calculate_capacity)(u32 voltage);
};
# 50 "board-zte-blade.c" 2
# 1 "./include/mach/rpc_server_handset.h" 1
# 33 "./include/mach/rpc_server_handset.h"
struct msm_handset_platform_data {
 const char *hs_name;
 uint32_t pwr_key_delay_ms;
};

void report_headset_status(bool connected);
# 51 "board-zte-blade.c" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h" 1
# 23 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h" 1
# 12 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/uio.h" 1
# 16 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};
# 13 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h" 2



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/compatmac.h" 1
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/mtd/mtd-abi.h" 1
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/mtd/mtd-abi.h"
struct erase_info_user {
 __u32 start;
 __u32 length;
};

struct erase_info_user64 {
 __u64 start;
 __u64 length;
};

struct mtd_oob_buf {
 __u32 start;
 __u32 length;
 unsigned char *ptr;
};

struct mtd_oob_buf64 {
 __u64 start;
 __u32 pad;
 __u32 length;
 __u64 usr_ptr;
};
# 64 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/mtd/mtd-abi.h"
struct mtd_info_user {
 __u8 type;
 __u32 flags;
 __u32 size;
 __u32 erasesize;
 __u32 writesize;
 __u32 oobsize;


 __u32 ecctype;
 __u32 eccsize;
};

struct region_info_user {
 __u32 offset;

 __u32 erasesize;
 __u32 numblocks;
 __u32 regionindex;
};

struct otp_info {
 __u32 start;
 __u32 length;
 __u32 locked;
};
# 118 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/mtd/mtd-abi.h"
struct nand_oobinfo {
 __u32 useecc;
 __u32 eccbytes;
 __u32 oobfree[8][2];
 __u32 eccpos[32];
};

struct nand_oobfree {
 __u32 offset;
 __u32 length;
};






struct nand_ecclayout {
 __u32 eccbytes;
 __u32 eccpos[256];
 __u32 oobavail;
 struct nand_oobfree oobfree[8];
};
# 150 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/mtd/mtd-abi.h"
struct mtd_ecc_stats {
 __u32 corrected;
 __u32 failed;
 __u32 badblocks;
 __u32 bbtblocks;
};




enum mtd_file_modes {
 MTD_MODE_NORMAL = 0,
 MTD_MODE_OTP_FACTORY = 1,
 MTD_MODE_OTP_USER = 2,
 MTD_MODE_RAW,
};
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h" 2
# 35 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h"
struct erase_info {
 struct mtd_info *mtd;
 uint64_t addr;
 uint64_t len;
 uint64_t fail_addr;
 u_long time;
 u_long retries;
 unsigned dev;
 unsigned cell;
 void (*callback) (struct erase_info *self);
 u_long priv;
 u_char state;
 struct erase_info *next;
};

struct mtd_erase_region_info {
 uint64_t offset;
 uint32_t erasesize;
 uint32_t numblocks;
 unsigned long *lockmap;
};
# 65 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h"
typedef enum {
 MTD_OOB_PLACE,
 MTD_OOB_AUTO,
 MTD_OOB_RAW,
} mtd_oob_mode_t;
# 90 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h"
struct mtd_oob_ops {
 mtd_oob_mode_t mode;
 size_t len;
 size_t retlen;
 size_t ooblen;
 size_t oobretlen;
 uint32_t ooboffs;
 uint8_t *datbuf;
 uint8_t *oobbuf;
};

struct mtd_info {
 u_char type;
 uint32_t flags;
 uint64_t size;





 uint32_t erasesize;







 uint32_t writesize;

 uint32_t oobsize;
 uint32_t oobavail;





 unsigned int erasesize_shift;
 unsigned int writesize_shift;

 unsigned int erasesize_mask;
 unsigned int writesize_mask;


 const char *name;
 int index;


 struct nand_ecclayout *ecclayout;




 int numeraseregions;
 struct mtd_erase_region_info *eraseregions;
# 153 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h"
 int (*erase) (struct mtd_info *mtd, struct erase_info *instr);



 int (*point) (struct mtd_info *mtd, loff_t from, size_t len,
   size_t *retlen, void **virt, resource_size_t *phys);


 void (*unpoint) (struct mtd_info *mtd, loff_t from, size_t len);





 unsigned long (*get_unmapped_area) (struct mtd_info *mtd,
         unsigned long len,
         unsigned long offset,
         unsigned long flags);




 struct backing_dev_info *backing_dev_info;


 int (*read) (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf);
 int (*write) (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf);
# 188 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/mtd.h"
 int (*panic_write) (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf);

 int (*read_oob) (struct mtd_info *mtd, loff_t from,
    struct mtd_oob_ops *ops);
 int (*write_oob) (struct mtd_info *mtd, loff_t to,
    struct mtd_oob_ops *ops);






 int (*get_fact_prot_info) (struct mtd_info *mtd, struct otp_info *buf, size_t len);
 int (*read_fact_prot_reg) (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf);
 int (*get_user_prot_info) (struct mtd_info *mtd, struct otp_info *buf, size_t len);
 int (*read_user_prot_reg) (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf);
 int (*write_user_prot_reg) (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, u_char *buf);
 int (*lock_user_prot_reg) (struct mtd_info *mtd, loff_t from, size_t len);





 int (*writev) (struct mtd_info *mtd, const struct kvec *vecs, unsigned long count, loff_t to, size_t *retlen);


 void (*sync) (struct mtd_info *mtd);


 int (*lock) (struct mtd_info *mtd, loff_t ofs, uint64_t len);
 int (*unlock) (struct mtd_info *mtd, loff_t ofs, uint64_t len);


 int (*suspend) (struct mtd_info *mtd);
 void (*resume) (struct mtd_info *mtd);


 int (*block_isbad) (struct mtd_info *mtd, loff_t ofs);
 int (*block_markbad) (struct mtd_info *mtd, loff_t ofs);

 struct notifier_block reboot_notifier;


 struct mtd_ecc_stats ecc_stats;

 int subpage_sft;

 void *priv;

 struct module *owner;
 struct device dev;
 int usecount;





 int (*get_device) (struct mtd_info *mtd);
 void (*put_device) (struct mtd_info *mtd);
};

static inline struct mtd_info *dev_to_mtd(struct device *dev)
{
 return dev ? dev_get_drvdata(dev) : ((void *)0);
}

static inline uint32_t mtd_div_by_eb(uint64_t sz, struct mtd_info *mtd)
{
 if (mtd->erasesize_shift)
  return sz >> mtd->erasesize_shift;
 ({ unsigned int __r, __b = (mtd->erasesize); if (!__builtin_constant_p(__b) || __b == 0 || (__LINUX_ARM_ARCH__ < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = sz; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( __asmeq("%0", "r1") __asmeq("%1", "r2") __asmeq("%2", "r0") __asmeq("%3", "r4") "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); sz = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = sz; __r &= (__b - 1); sz /= __b; } else { unsigned long long __res, __x, __t, __m, __n = sz; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } sz = __res; } __r; });
 return sz;
}

static inline uint32_t mtd_mod_by_eb(uint64_t sz, struct mtd_info *mtd)
{
 if (mtd->erasesize_shift)
  return sz & mtd->erasesize_mask;
 return ({ unsigned int __r, __b = (mtd->erasesize); if (!__builtin_constant_p(__b) || __b == 0 || (__LINUX_ARM_ARCH__ < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = sz; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( __asmeq("%0", "r1") __asmeq("%1", "r2") __asmeq("%2", "r0") __asmeq("%3", "r4") "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); sz = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = sz; __r &= (__b - 1); sz /= __b; } else { unsigned long long __res, __x, __t, __m, __n = sz; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } sz = __res; } __r; });
}

static inline uint32_t mtd_div_by_ws(uint64_t sz, struct mtd_info *mtd)
{
 if (mtd->writesize_shift)
  return sz >> mtd->writesize_shift;
 ({ unsigned int __r, __b = (mtd->writesize); if (!__builtin_constant_p(__b) || __b == 0 || (__LINUX_ARM_ARCH__ < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = sz; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( __asmeq("%0", "r1") __asmeq("%1", "r2") __asmeq("%2", "r0") __asmeq("%3", "r4") "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); sz = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = sz; __r &= (__b - 1); sz /= __b; } else { unsigned long long __res, __x, __t, __m, __n = sz; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } sz = __res; } __r; });
 return sz;
}

static inline uint32_t mtd_mod_by_ws(uint64_t sz, struct mtd_info *mtd)
{
 if (mtd->writesize_shift)
  return sz & mtd->writesize_mask;
 return ({ unsigned int __r, __b = (mtd->writesize); if (!__builtin_constant_p(__b) || __b == 0 || (__LINUX_ARM_ARCH__ < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = sz; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( __asmeq("%0", "r1") __asmeq("%1", "r2") __asmeq("%2", "r0") __asmeq("%3", "r4") "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); sz = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = sz; __r &= (__b - 1); sz /= __b; } else { unsigned long long __res, __x, __t, __m, __n = sz; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } sz = __res; } __r; });
}



extern int add_mtd_device(struct mtd_info *mtd);
extern int del_mtd_device (struct mtd_info *mtd);

extern struct mtd_info *get_mtd_device(struct mtd_info *mtd, int num);
extern int __get_mtd_device(struct mtd_info *mtd);
extern void __put_mtd_device(struct mtd_info *mtd);
extern struct mtd_info *get_mtd_device_nm(const char *name);
extern void put_mtd_device(struct mtd_info *mtd);


struct mtd_notifier {
 void (*add)(struct mtd_info *mtd);
 void (*remove)(struct mtd_info *mtd);
 struct list_head list;
};


extern void register_mtd_user (struct mtd_notifier *new);
extern int unregister_mtd_user (struct mtd_notifier *old);

int default_mtd_writev(struct mtd_info *mtd, const struct kvec *vecs,
         unsigned long count, loff_t to, size_t *retlen);

int default_mtd_readv(struct mtd_info *mtd, struct kvec *vecs,
        unsigned long count, loff_t from, size_t *retlen);




static inline void mtd_erase_callback(struct erase_info *instr)
{
 if (instr->callback)
  instr->callback(instr);
}
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/flashchip.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/flashchip.h"
typedef enum {
 FL_READY,
 FL_STATUS,
 FL_CFI_QUERY,
 FL_JEDEC_QUERY,
 FL_ERASING,
 FL_ERASE_SUSPENDING,
 FL_ERASE_SUSPENDED,
 FL_WRITING,
 FL_WRITING_TO_BUFFER,
 FL_OTP_WRITE,
 FL_WRITE_SUSPENDING,
 FL_WRITE_SUSPENDED,
 FL_PM_SUSPENDED,
 FL_SYNCING,
 FL_UNLOADING,
 FL_LOCKING,
 FL_UNLOCKING,
 FL_POINT,
 FL_XIP_WHILE_ERASING,
 FL_XIP_WHILE_WRITING,
 FL_SHUTDOWN,

 FL_READING,
 FL_CACHEDPRG,

 FL_RESETING,
 FL_OTPING,
 FL_PREPARING_ERASE,
 FL_VERIFYING_ERASE,

 FL_UNKNOWN
} flstate_t;







struct flchip {
 unsigned long start;
# 70 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/flashchip.h"
 int ref_point_counter;
 flstate_t state;
 flstate_t oldstate;

 unsigned int write_suspended:1;
 unsigned int erase_suspended:1;
 unsigned long in_progress_block_addr;

 struct mutex mutex;
 wait_queue_head_t wq;

 int word_write_time;
 int buffer_write_time;
 int erase_time;

 int word_write_time_max;
 int buffer_write_time_max;
 int erase_time_max;

 void *priv;
};



struct flchip_shared {
 struct mutex lock;
 struct flchip *writing;
 struct flchip *erasing;
};
# 25 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/bbm.h" 1
# 43 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/bbm.h"
struct nand_bbt_descr {
 int options;
 int pages[8];
 int offs;
 int veroffs;
 uint8_t version[8];
 int len;
 int maxblocks;
 int reserved_block_code;
 uint8_t *pattern;
};
# 114 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/bbm.h"
struct bbm_info {
 int bbt_erase_shift;
 int badblockpos;
 int options;

 uint8_t *bbt;

 int (*isbad_bbt)(struct mtd_info *mtd, loff_t ofs, int allowbbt);


 struct nand_bbt_descr *badblock_pattern;

 void *priv;
};


extern int onenand_scan_bbt(struct mtd_info *mtd, struct nand_bbt_descr *bd);
extern int onenand_default_bbt(struct mtd_info *mtd);
# 26 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h" 2

struct mtd_info;
struct nand_flash_dev;

extern int nand_scan (struct mtd_info *mtd, int max_chips);


extern int nand_scan_ident(struct mtd_info *mtd, int max_chips,
      struct nand_flash_dev *table);
extern int nand_scan_tail(struct mtd_info *mtd);


extern void nand_release (struct mtd_info *mtd);


extern void nand_wait_ready(struct mtd_info *mtd);


extern int nand_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len);


extern int nand_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
# 133 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
typedef enum {
 NAND_ECC_NONE,
 NAND_ECC_SOFT,
 NAND_ECC_HW,
 NAND_ECC_HW_SYNDROME,
 NAND_ECC_HW_OOB_FIRST,
} nand_ecc_modes_t;
# 230 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct nand_chip;
# 239 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct nand_hw_control {
 spinlock_t lock;
 struct nand_chip *active;
 wait_queue_head_t wq;
};
# 267 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct nand_ecc_ctrl {
 nand_ecc_modes_t mode;
 int steps;
 int size;
 int bytes;
 int total;
 int prepad;
 int postpad;
 struct nand_ecclayout *layout;
 void (*hwctl)(struct mtd_info *mtd, int mode);
 int (*calculate)(struct mtd_info *mtd,
          const uint8_t *dat,
          uint8_t *ecc_code);
 int (*correct)(struct mtd_info *mtd, uint8_t *dat,
        uint8_t *read_ecc,
        uint8_t *calc_ecc);
 int (*read_page_raw)(struct mtd_info *mtd,
       struct nand_chip *chip,
       uint8_t *buf, int page);
 void (*write_page_raw)(struct mtd_info *mtd,
        struct nand_chip *chip,
        const uint8_t *buf);
 int (*read_page)(struct mtd_info *mtd,
          struct nand_chip *chip,
          uint8_t *buf, int page);
 int (*read_subpage)(struct mtd_info *mtd,
          struct nand_chip *chip,
          uint32_t offs, uint32_t len,
          uint8_t *buf);
 void (*write_page)(struct mtd_info *mtd,
           struct nand_chip *chip,
           const uint8_t *buf);
 int (*read_oob)(struct mtd_info *mtd,
         struct nand_chip *chip,
         int page,
         int sndcmd);
 int (*write_oob)(struct mtd_info *mtd,
          struct nand_chip *chip,
          int page);
};
# 317 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct nand_buffers {
 uint8_t ecccalc[256];
 uint8_t ecccode[256];
 uint8_t databuf[4096 + 256];
};
# 377 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct nand_chip {
 void *IO_ADDR_R;
 void *IO_ADDR_W;

 uint8_t (*read_byte)(struct mtd_info *mtd);
 u16 (*read_word)(struct mtd_info *mtd);
 void (*write_buf)(struct mtd_info *mtd, const uint8_t *buf, int len);
 void (*read_buf)(struct mtd_info *mtd, uint8_t *buf, int len);
 int (*verify_buf)(struct mtd_info *mtd, const uint8_t *buf, int len);
 void (*select_chip)(struct mtd_info *mtd, int chip);
 int (*block_bad)(struct mtd_info *mtd, loff_t ofs, int getchip);
 int (*block_markbad)(struct mtd_info *mtd, loff_t ofs);
 void (*cmd_ctrl)(struct mtd_info *mtd, int dat,
        unsigned int ctrl);
 int (*dev_ready)(struct mtd_info *mtd);
 void (*cmdfunc)(struct mtd_info *mtd, unsigned command, int column, int page_addr);
 int (*waitfunc)(struct mtd_info *mtd, struct nand_chip *this);
 void (*erase_cmd)(struct mtd_info *mtd, int page);
 int (*scan_bbt)(struct mtd_info *mtd);
 int (*errstat)(struct mtd_info *mtd, struct nand_chip *this, int state, int status, int page);
 int (*write_page)(struct mtd_info *mtd, struct nand_chip *chip,
          const uint8_t *buf, int page, int cached, int raw);

 int chip_delay;
 unsigned int options;

 int page_shift;
 int phys_erase_shift;
 int bbt_erase_shift;
 int chip_shift;
 int numchips;
 uint64_t chipsize;
 int pagemask;
 int pagebuf;
 int subpagesize;
 uint8_t cellinfo;
 int badblockpos;
 int badblockbits;

 flstate_t state;

 uint8_t *oob_poi;
 struct nand_hw_control *controller;
 struct nand_ecclayout *ecclayout;

 struct nand_ecc_ctrl ecc;
 struct nand_buffers *buffers;
 struct nand_hw_control hwcontrol;

 struct mtd_oob_ops ops;

 uint8_t *bbt;
 struct nand_bbt_descr *bbt_td;
 struct nand_bbt_descr *bbt_md;

 struct nand_bbt_descr *badblock_pattern;

 void *priv;
};
# 462 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct nand_flash_dev {
 char *name;
 int id;
 unsigned long pagesize;
 unsigned long chipsize;
 unsigned long erasesize;
 unsigned long options;
};






struct nand_manufacturers {
 int id;
 char * name;
};

extern struct nand_flash_dev nand_flash_ids[];
extern struct nand_manufacturers nand_manuf_ids[];

extern int nand_scan_bbt(struct mtd_info *mtd, struct nand_bbt_descr *bd);
extern int nand_update_bbt(struct mtd_info *mtd, loff_t offs);
extern int nand_default_bbt(struct mtd_info *mtd);
extern int nand_isbad_bbt(struct mtd_info *mtd, loff_t offs, int allowbbt);
extern int nand_erase_nand(struct mtd_info *mtd, struct erase_info *instr,
      int allowbbt);
extern int nand_do_read(struct mtd_info *mtd, loff_t from, size_t len,
   size_t * retlen, uint8_t * buf);
# 506 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct platform_nand_chip {
 int nr_chips;
 int chip_offset;
 int nr_partitions;
 struct mtd_partition *partitions;
 struct nand_ecclayout *ecclayout;
 int chip_delay;
 unsigned int options;
 const char **part_probe_types;
 void (*set_parts)(uint64_t size,
     struct platform_nand_chip *chip);
 void *priv;
};


struct platform_device;
# 538 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/nand.h"
struct platform_nand_ctrl {
 int (*probe)(struct platform_device *pdev);
 void (*remove)(struct platform_device *pdev);
 void (*hwcontrol)(struct mtd_info *mtd, int cmd);
 int (*dev_ready)(struct mtd_info *mtd);
 void (*select_chip)(struct mtd_info *mtd, int chip);
 void (*cmd_ctrl)(struct mtd_info *mtd, int dat,
        unsigned int ctrl);
 void (*write_buf)(struct mtd_info *mtd,
        const uint8_t *buf, int len);
 void (*read_buf)(struct mtd_info *mtd,
        uint8_t *buf, int len);
 void *priv;
};






struct platform_nand_data {
 struct platform_nand_chip chip;
 struct platform_nand_ctrl ctrl;
};


static inline
struct platform_nand_chip *get_platform_nandchip(struct mtd_info *mtd)
{
 struct nand_chip *chip = mtd->priv;

 return chip->priv;
}
# 54 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/partitions.h" 1
# 37 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/mtd/partitions.h"
struct mtd_partition {
 char *name;
 uint64_t size;
 uint64_t offset;
 uint32_t mask_flags;
 struct nand_ecclayout *ecclayout;
};






struct mtd_info;

int add_mtd_partitions(struct mtd_info *, const struct mtd_partition *, int);
int del_mtd_partitions(struct mtd_info *);





struct mtd_part_parser {
 struct list_head list;
 struct module *owner;
 const char *name;
 int (*parse_fn)(struct mtd_info *, struct mtd_partition **, unsigned long);
};

extern int register_mtd_parser(struct mtd_part_parser *parser);
extern int deregister_mtd_parser(struct mtd_part_parser *parser);
extern int parse_mtd_partitions(struct mtd_info *master, const char **types,
    struct mtd_partition **pparts, unsigned long origin);



struct device;
struct device_node;

int __attribute__ ((__section__(".devinit.text"))) of_mtd_parse_partitions(struct device *dev,
                                      struct device_node *node,
                                      struct mtd_partition **pparts);




static inline int mtd_has_partitions(void) { return 0; }





static inline int mtd_has_cmdlinepart(void) { return 0; }
# 55 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/i2c.h" 1
# 504 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/i2c.h"
struct i2c_msg {
 __u16 addr;
 __u16 flags;







 __u16 len;
 __u8 *buf;
};
# 562 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/i2c.h"
union i2c_smbus_data {
 __u8 byte;
 __u16 word;
 __u8 block[32 + 2];

};
# 56 "board-zte-blade.c" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/i2c-gpio.h" 1
# 28 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/i2c-gpio.h"
struct i2c_gpio_platform_data {
 unsigned int sda_pin;
 unsigned int scl_pin;
 int udelay;
 int timeout;
 unsigned int sda_is_open_drain:1;
 unsigned int scl_is_open_drain:1;
 unsigned int scl_is_output_only:1;
};
# 58 "board-zte-blade.c" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/android_pmem.h" 1
# 20 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/android_pmem.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/fs.h" 1
# 9 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/fs.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/limits.h" 1
# 10 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/fs.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioctl.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/ioctl.h" 1
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/ioctl.h" 2
# 11 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/fs.h" 2
# 35 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
# 21 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/android_pmem.h" 2
# 64 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/android_pmem.h"
struct pmem_region {
 unsigned long offset;
 unsigned long len;
};

struct pmem_addr {
 unsigned long vaddr;
 unsigned long offset;
 unsigned long length;
};

struct pmem_freespace {
 unsigned long total;
 unsigned long largest;
};

struct pmem_allocation {
 unsigned long size;
 unsigned int align;
};
# 60 "board-zte-blade.c" 2
# 1 "./include/mach/camera.h" 1
# 23 "./include/mach/camera.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/poll.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/poll.h" 1
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/poll.h" 1
# 31 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/asm-generic/poll.h"
struct pollfd {
 int fd;
 short events;
 short revents;
};
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/arch/arm/include/asm/poll.h" 2
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/poll.h" 2
# 24 "./include/mach/camera.h" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cdev.h" 1




# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kdev_t.h" 1
# 6 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cdev.h" 2


struct file_operations;
struct inode;
struct module;

struct cdev {
 struct kobject kobj;
 struct module *owner;
 const struct file_operations *ops;
 struct list_head list;
 dev_t dev;
 unsigned int count;
};

void cdev_init(struct cdev *, const struct file_operations *);

struct cdev *cdev_alloc(void);

void cdev_put(struct cdev *p);

int cdev_add(struct cdev *, dev_t, unsigned);

void cdev_del(struct cdev *);

int cdev_index(struct inode *inode);

void cd_forget(struct inode *);

extern struct backing_dev_info directly_mappable_cdev_bdi;
# 25 "./include/mach/camera.h" 2





# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h" 1
# 188 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct msm_ctrl_cmd {
 uint16_t type;
 uint16_t length;
 void *value;
 uint16_t status;
 uint32_t timeout_ms;
 int resp_fd;
};

struct msm_vfe_evt_msg {
 unsigned short type;
 unsigned short msg_id;
 unsigned int len;
 uint32_t frame_id;
 void *data;
};

struct msm_isp_evt_msg {
 unsigned short type;
 unsigned short msg_id;
 unsigned int len;



 uint8_t data[48];
};
struct msm_vpe_evt_msg {
 unsigned short type;
 unsigned short msg_id;
 unsigned int len;
 uint32_t frame_id;
 void *data;
};
struct msm_isp_stats_event_ctrl {
 unsigned short resptype;
 union {
  struct msm_isp_evt_msg isp_msg;
  struct msm_ctrl_cmd ctrl;
 } isp_data;
};







struct msm_stats_event_ctrl {



 int resptype;
 int timeout_ms;
 struct msm_ctrl_cmd ctrl_cmd;

 struct msm_vfe_evt_msg stats_event;
};


struct msm_camera_cfg_cmd {


 uint16_t cfg_type;


 uint16_t cmd_type;
 uint16_t queue;
 uint16_t length;
 void *value;
};
# 309 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct msm_vfe_cfg_cmd {
 int cmd_type;
 uint16_t length;
 void *value;
};

struct msm_vpe_cfg_cmd {
 int cmd_type;
 uint16_t length;
 void *value;
};


struct camera_enable_cmd {
 char name[32];
};
# 362 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct msm_pmem_info {
 int type;
 int fd;
 void *vaddr;
 uint32_t offset;
 uint32_t len;
 uint32_t y_off;
 uint32_t cbcr_off;
 uint8_t active;
};

struct outputCfg {
 uint32_t height;
 uint32_t width;

 uint32_t window_height_firstline;
 uint32_t window_height_lastline;
};
# 400 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct fd_roi_info {
 void *info;
 int info_len;
};

struct msm_frame {
 struct timespec ts;
 int path;
 unsigned long buffer;
 uint32_t y_off;
 uint32_t cbcr_off;
 int fd;

 void *cropinfo;
 int croplen;
 uint32_t error_code;
 struct fd_roi_info roi_info;
};



struct msm_stats_buf {
 int type;
 unsigned long buffer;
 int fd;
};
# 440 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct crop_info {
 void *info;
 int len;
};

struct msm_postproc {
 int ftnum;
 struct msm_frame fthumnail;
 int fmnum;
 struct msm_frame fmain;
};

struct msm_snapshot_pp_status {
 void *status;
};
# 511 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct sensor_pict_fps {
 uint16_t prevfps;
 uint16_t pictfps;
};

struct exp_gain_cfg {
 uint16_t gain;
 uint32_t line;
};

struct focus_cfg {
 int32_t steps;
 int dir;
};

struct fps_cfg {
 uint16_t f_mult;
 uint16_t fps_div;
 uint32_t pict_fps_div;
};
struct wb_info_cfg {
 uint16_t red_gain;
 uint16_t green_gain;
 uint16_t blue_gain;
};
struct sensor_cfg_data {
 int cfgtype;
 int mode;
 int rs;
 uint8_t max_steps;

 union {
  int8_t effect;
  uint8_t lens_shading;
  uint16_t prevl_pf;
  uint16_t prevp_pl;
  uint16_t pictl_pf;
  uint16_t pictp_pl;
  uint32_t pict_max_exp_lc;
  uint16_t p_fps;
  struct sensor_pict_fps gfps;
  struct exp_gain_cfg exp_gain;
  struct focus_cfg focus;
  struct fps_cfg fps;
  struct wb_info_cfg wb_info;
 } cfg;
};

enum flash_type {
 LED_FLASH,
 STROBE_FLASH,
};

enum strobe_flash_ctrl_type {
 STROBE_FLASH_CTRL_INIT,
 STROBE_FLASH_CTRL_CHARGE,
 STROBE_FLASH_CTRL_RELEASE
};

struct strobe_flash_ctrl_data {
 enum strobe_flash_ctrl_type type;
 int charge_en;
};

struct msm_camera_info {
 int num_cameras;
 uint8_t has_3d_support[5];
 uint8_t is_internal_cam[5];
 uint32_t s_mount_angle[5];
};

struct flash_ctrl_data {
 int flashtype;
 union {
  int led_state;
  struct strobe_flash_ctrl_data strobe_ctrl;
 } ctrl_data;
};
# 598 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/media/msm_camera.h"
struct msm_camsensor_info {
 char name[32];
 uint8_t flash_enabled;
 int8_t total_steps;
};
# 31 "./include/mach/camera.h" 2
# 49 "./include/mach/camera.h"
enum msm_queue {
 MSM_CAM_Q_CTRL,
 MSM_CAM_Q_VFE_EVT,
 MSM_CAM_Q_VFE_MSG,
 MSM_CAM_Q_V4L2_REQ,
 MSM_CAM_Q_VPE_MSG,
};

enum vfe_resp_msg {
 VFE_EVENT,
 VFE_MSG_GENERAL,
 VFE_MSG_SNAPSHOT,
 VFE_MSG_OUTPUT_P,
 VFE_MSG_OUTPUT_T,
 VFE_MSG_OUTPUT_S,
 VFE_MSG_OUTPUT_V,
 VFE_MSG_STATS_AEC,
 VFE_MSG_STATS_AF,
 VFE_MSG_STATS_AWB,
 VFE_MSG_STATS_RS,
 VFE_MSG_STATS_CS,
 VFE_MSG_STATS_IHIST,
 VFE_MSG_STATS_SKIN,
 VFE_MSG_STATS_WE,
 VFE_MSG_SYNC_TIMER0,
 VFE_MSG_SYNC_TIMER1,
 VFE_MSG_SYNC_TIMER2,
};

enum vpe_resp_msg {
 VPE_EVENT,
 VPE_MSG_GENERAL,
 VPE_MSG_SNAPSHOT,
 VPE_MSG_OUTPUT_P,
 VPE_MSG_OUTPUT_T,
 VPE_MSG_OUTPUT_S,
 VPE_MSG_OUTPUT_V,
};

enum msm_camera_type {
 BACK_CAMERA_2D,
 FRONT_CAMERA_2D,
 BACK_CAMERA_3D,
};

struct msm_vpe_phy_info {
 uint32_t sbuf_phy;
 uint32_t y_phy;
 uint32_t cbcr_phy;
 uint8_t output_id;
 uint32_t frame_id;
};





struct msm_vfe_phy_info {
 uint32_t sbuf_phy;
 uint32_t y_phy;
 uint32_t cbcr_phy;
 uint8_t output_id;
 uint32_t frame_id;
};

struct video_crop_t{
 uint32_t in1_w;
 uint32_t out1_w;
 uint32_t in1_h;
 uint32_t out1_h;
 uint32_t in2_w;
 uint32_t out2_w;
 uint32_t in2_h;
 uint32_t out2_h;
 uint8_t update_flag;
};

struct msm_vpe_buf_info {
 uint32_t y_phy;
 uint32_t cbcr_phy;
 struct timespec ts;
 uint32_t frame_id;
 struct video_crop_t vpe_crop;
};

struct msm_vfe_resp {
 enum vfe_resp_msg type;
 struct msm_vfe_evt_msg evt_msg;
 struct msm_vfe_phy_info phy;
 struct msm_vpe_buf_info vpe_bf;
 void *extdata;
 int32_t extlen;
};

struct msm_vpe_resp {
 enum vpe_resp_msg type;
 struct msm_vpe_evt_msg evt_msg;
 struct msm_vpe_phy_info phy;
 void *extdata;
 int32_t extlen;
};

struct msm_vpe_callback {
 void (*vpe_resp)(struct msm_vpe_resp *,
     enum msm_queue, void *syncdata,
  void *time_stamp, gfp_t gfp);
 void* (*vpe_alloc)(int, void *syncdata, gfp_t gfp);
 void (*vpe_free)(void *ptr);
};

struct msm_vfe_callback {
 void (*vfe_resp)(struct msm_vfe_resp *,
  enum msm_queue, void *syncdata,
  gfp_t gfp);
 void* (*vfe_alloc)(int, void *syncdata, gfp_t gfp);
 void (*vfe_free)(void *ptr);
};

struct msm_camvfe_fn {
 int (*vfe_init)(struct msm_vfe_callback *, struct platform_device *);
 int (*vfe_enable)(struct camera_enable_cmd *);
 int (*vfe_config)(struct msm_vfe_cfg_cmd *, void *);
 int (*vfe_disable)(struct camera_enable_cmd *,
  struct platform_device *dev);
 void (*vfe_release)(struct platform_device *);
 void (*vfe_stop)(void);
};

struct msm_camvpe_fn {
 int (*vpe_reg)(struct msm_vpe_callback *);
 int (*vpe_cfg_update) (void *);
 void (*send_frame_to_vpe) (uint32_t y_phy, uint32_t cbcr_phy,
       struct timespec *ts);
 int (*vpe_config)(struct msm_vpe_cfg_cmd *, void *);
 int *dis;
};

struct msm_sensor_ctrl {
 int (*s_init)(const struct msm_camera_sensor_info *);
 int (*s_release)(void);
 int (*s_config)(void *);
 enum msm_camera_type s_camera_type;
 uint32_t s_mount_angle;
};
struct msm_strobe_flash_ctrl {
 int (*strobe_flash_init)
  (struct msm_camera_sensor_strobe_flash_data *);
 int (*strobe_flash_release)
  (struct msm_camera_sensor_strobe_flash_data *, int32_t);
 int (*strobe_flash_charge)(int32_t, int32_t, uint32_t);
};


struct msm_queue_cmd {
 struct list_head list_config;
 struct list_head list_control;
 struct list_head list_frame;
 struct list_head list_pict;
 struct list_head list_vpe_frame;
 enum msm_queue type;
 void *command;
 atomic_t on_heap;
 struct timespec ts;
 uint32_t error_code;
};

struct msm_device_queue {
 struct list_head list;
 spinlock_t lock;
 wait_queue_head_t wait;
 int max;
 int len;
 const char *name;
};

struct msm_sync {




 struct hlist_head pmem_frames;
 struct hlist_head pmem_stats;






 struct msm_device_queue event_q;




 struct msm_device_queue frame_q;
 int unblock_poll_frame;




 struct msm_device_queue pict_q;
 int get_pic_abort;
 struct msm_device_queue vpe_q;

 struct msm_camera_sensor_info *sdata;
 struct msm_camvfe_fn vfefn;
 struct msm_camvpe_fn vpefn;
 struct msm_sensor_ctrl sctrl;
 struct msm_strobe_flash_ctrl sfctrl;
 struct wake_lock wake_lock;
 struct platform_device *pdev;
 int16_t ignore_qcmd_type;
 uint8_t ignore_qcmd;
 uint8_t opencnt;
 void *cropinfo;
 int croplen;
 int core_powered_on;

 struct fd_roi_info fdroiinfo;

 atomic_t vpe_enable;
 uint32_t pp_mask;
 uint8_t pp_frame_avail;
 struct msm_queue_cmd *pp_prev;
 struct msm_queue_cmd *pp_snap;
 struct msm_queue_cmd *pp_thumb;
 int video_fd;

 const char *apps_id;

 struct mutex lock;
 struct list_head list;
 uint8_t liveshot_enabled;
 struct msm_cam_v4l2_device *pcam_sync;
 spinlock_t pmem_frame_spinlock;
 spinlock_t pmem_stats_spinlock;
 spinlock_t abort_pict_lock;
};




struct msm_cam_device {
 struct msm_sync *sync;
 struct device *device;
 struct cdev cdev;



 atomic_t opened;
};

struct msm_control_device {
 struct msm_cam_device *pmsm;


 uint8_t ctrl_data[150];
 struct msm_ctrl_cmd ctrl;
 struct msm_queue_cmd qcmd;




 struct msm_device_queue ctrl_q;
};

struct register_address_value_pair {
 uint16_t register_address;
 uint16_t register_value;
};

struct msm_pmem_region {
 struct hlist_node list;
 unsigned long paddr;
 unsigned long len;
 struct file *file;
 struct msm_pmem_info info;
};

struct axidata {
 uint32_t bufnum1;
 uint32_t bufnum2;
 uint32_t bufnum3;
 struct msm_pmem_region *region;
};
# 342 "./include/mach/camera.h"
static inline int msm_camera_flash_set_led_state(
 struct msm_camera_sensor_flash_data *fdata,
 unsigned led_state)
{
 return -ENOTSUPP;
}
static inline int msm_strobe_flash_init(
 struct msm_sync *sync, uint32_t sftype)
{
 return -ENOTSUPP;
}
static inline int msm_flash_ctrl(
  struct msm_camera_sensor_info *sdata,
  struct flash_ctrl_data *flash_info)
{
 return -ENOTSUPP;
}



struct msm_v4l2_driver {
 struct msm_sync *sync;
 int (*open)(struct msm_sync *, const char *apps_id, int);
 int (*release)(struct msm_sync *);
 int (*ctrl)(struct msm_sync *, struct msm_ctrl_cmd *);
 int (*reg_pmem)(struct msm_sync *, struct msm_pmem_info *);
 int (*get_frame) (struct msm_sync *, struct msm_frame *);
 int (*put_frame) (struct msm_sync *, struct msm_frame *);
 int (*get_pict) (struct msm_sync *, struct msm_ctrl_cmd *);
 unsigned int (*drv_poll) (struct msm_sync *, struct file *,
    struct poll_table_struct *);
};

int msm_v4l2_register(struct msm_v4l2_driver *);
int msm_v4l2_unregister(struct msm_v4l2_driver *);

void msm_camvfe_init(void);
int msm_camvfe_check(void *);
void msm_camvfe_fn_init(struct msm_camvfe_fn *, void *);
void msm_camvpe_fn_init(struct msm_camvpe_fn *, void *);
int msm_camera_drv_start(struct platform_device *dev,
  int (*sensor_probe)(const struct msm_camera_sensor_info *,
     struct msm_sensor_ctrl *));

enum msm_camio_clk_type {
 CAMIO_VFE_MDC_CLK,
 CAMIO_MDC_CLK,
 CAMIO_VFE_CLK,
 CAMIO_VFE_AXI_CLK,

 CAMIO_VFE_CAMIF_CLK,
 CAMIO_VFE_PBDG_CLK,
 CAMIO_CAM_MCLK_CLK,
 CAMIO_CAMIF_PAD_PBDG_CLK,

 CAMIO_CSI0_VFE_CLK,
 CAMIO_CSI1_VFE_CLK,
 CAMIO_VFE_PCLK,

 CAMIO_CSI_SRC_CLK,
 CAMIO_CSI0_CLK,
 CAMIO_CSI1_CLK,
 CAMIO_CSI0_PCLK,
 CAMIO_CSI1_PCLK,
 CAMIO_JPEG_CLK,
 CAMIO_JPEG_PCLK,
 CAMIO_VPE_CLK,
 CAMIO_VPE_PCLK,
 CAMIO_MAX_CLK
};

enum msm_camio_clk_src_type {
 MSM_CAMIO_CLK_SRC_INTERNAL,
 MSM_CAMIO_CLK_SRC_EXTERNAL,
 MSM_CAMIO_CLK_SRC_MAX
};

enum msm_s_test_mode {
 S_TEST_OFF,
 S_TEST_1,
 S_TEST_2,
 S_TEST_3
};

enum msm_s_resolution {
 S_QTR_SIZE,
 S_FULL_SIZE,
 S_INVALID_SIZE
};

enum msm_s_reg_update {

 S_REG_INIT,

 S_UPDATE_PERIODIC,

 S_UPDATE_ALL,

 S_UPDATE_INVALID
};

enum msm_s_setting {
 S_RES_PREVIEW,
 S_RES_CAPTURE
};

enum msm_bus_perf_setting {
 S_INIT,
 S_PREVIEW,
 S_VIDEO,
 S_CAPTURE,
 S_DEFAULT,
 S_EXIT
};

int msm_camio_enable(struct platform_device *dev);
int msm_camio_jpeg_clk_enable(void);
int msm_camio_jpeg_clk_disable(void);
int msm_camio_vpe_clk_enable(void);
int msm_camio_vpe_clk_disable(void);

int msm_camio_clk_enable(enum msm_camio_clk_type clk);
int msm_camio_clk_disable(enum msm_camio_clk_type clk);
int msm_camio_clk_config(uint32_t freq);
void msm_camio_clk_rate_set(int rate);
void msm_camio_vfe_clk_rate_set(int rate);
void msm_camio_clk_rate_set_2(struct clk *clk, int rate);
void msm_camio_clk_set_min_rate(struct clk *clk, int rate);
void msm_camio_clk_axi_rate_set(int rate);
void msm_disable_io_gpio_clk(struct platform_device *);

void msm_camio_camif_pad_reg_reset(void);
void msm_camio_camif_pad_reg_reset_2(void);

void msm_camio_vfe_blk_reset(void);

void msm_camio_clk_sel(enum msm_camio_clk_src_type);
void msm_camio_disable(struct platform_device *);
int msm_camio_probe_on(struct platform_device *);
int msm_camio_probe_off(struct platform_device *);
int msm_camio_sensor_clk_off(struct platform_device *);
int msm_camio_sensor_clk_on(struct platform_device *);
int msm_camio_csi_config(struct msm_camera_csi_params *csi_params);
int add_axi_qos(void);
int update_axi_qos(uint32_t freq);
void release_axi_qos(void);
void msm_io_w(u32 data, void *addr);
void msm_io_w_mb(u32 data, void *addr);
u32 msm_io_r(void *addr);
u32 msm_io_r_mb(void *addr);
void msm_io_dump(void *addr, int size);
void msm_io_memcpy(void *dest_addr, void *src_addr, u32 len);
void msm_camio_set_perf_lvl(enum msm_bus_perf_setting);
# 61 "board-zte-blade.c" 2
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h" 1



# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h" 1
# 98 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h"
void __attribute__ ((__section__(".init.text"))) notrace kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
const char *kmem_cache_name(struct kmem_cache *);
int kern_ptr_validate(const void *ptr, unsigned long size);
int kmem_ptr_validate(struct kmem_cache *cachep, const void *ptr);
# 142 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h"
void * __must_check __krealloc(const void *, size_t, gfp_t);
void * __must_check krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
void kzfree(const void *);
size_t ksize(const void *);
# 172 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab_def.h" 1
# 17 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab_def.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmemtrace.h" 1
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab_def.h" 2
# 49 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab_def.h"
struct kmem_cache {

 struct array_cache *array[1];

 unsigned int batchcount;
 unsigned int limit;
 unsigned int shared;

 unsigned int buffer_size;
 u32 reciprocal_buffer_size;


 unsigned int flags;
 unsigned int num;



 unsigned int gfporder;


 gfp_t gfpflags;

 size_t colour;
 unsigned int colour_off;
 struct kmem_cache *slabp_cache;
 unsigned int slab_size;
 unsigned int dflags;


 void (*ctor)(void *obj);


 const char *name;
 struct list_head next;
# 118 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab_def.h"
 struct kmem_list3 *nodelists[(1 << 0)];



};


struct cache_sizes {
 size_t cs_size;
 struct kmem_cache *cs_cachep;



};
extern struct cache_sizes malloc_sizes[];

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);





static __inline __attribute__ ((__always_inline__)) void *
kmem_cache_alloc_notrace(struct kmem_cache *cachep, gfp_t flags)
{
 return kmem_cache_alloc(cachep, flags);
}
static inline size_t slab_buffer_size(struct kmem_cache *cachep)
{
 return 0;
}


static __inline __attribute__ ((__always_inline__)) void *kmalloc(size_t size, gfp_t flags)
{
 struct kmem_cache *cachep;
 void *ret;

 if (__builtin_constant_p(size)) {
  int i = 0;

  if (!size)
   return ((void *)16);






# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;

 if (size <= 96) goto found; else i++;

 if (size <= 128) goto found; else i++;

 if (size <= 192) goto found; else i++;

 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;

 if (size <= 262144) goto found; else i++;


 if (size <= 524288) goto found; else i++;


 if (size <= 1048576) goto found; else i++;


 if (size <= 2097152) goto found; else i++;


 if (size <= 4194304) goto found; else i++;
# 169 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab_def.h" 2

  return ((void *)0);
found:





   cachep = malloc_sizes[i].cs_cachep;

  ret = kmem_cache_alloc_notrace(cachep, flags);

  trace_kmalloc(_THIS_IP_, ret,
         size, slab_buffer_size(cachep), flags);

  return ret;
 }
 return __kmalloc(size, flags);
}
# 173 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h" 2
# 226 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h"
static inline void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > ULONG_MAX / size)
  return ((void *)0);
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
# 244 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h"
static inline void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}

static inline void *__kmalloc_node(size_t size, gfp_t flags, int node)
{
 return __kmalloc(size, flags);
}

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);

static inline void *kmem_cache_alloc_node(struct kmem_cache *cachep,
     gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
# 309 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/slab.h"
static inline void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}

void __attribute__ ((__section__(".init.text"))) notrace kmem_cache_init_late(void);
# 5 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/magic.h" 1
# 8 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h" 2


struct net;
struct completion;
struct mm_struct;
# 30 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h"
enum {
 PROC_ROOT_INO = 1,
};
# 46 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h"
typedef int (read_proc_t)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
typedef int (write_proc_t)(struct file *file, const char *buffer,
      unsigned long count, void *data);

struct proc_dir_entry {
 unsigned int low_ino;
 unsigned short namelen;
 const char *name;
 mode_t mode;
 nlink_t nlink;
 uid_t uid;
 gid_t gid;
 loff_t size;
 const struct inode_operations *proc_iops;
# 69 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h"
 const struct file_operations *proc_fops;
 struct proc_dir_entry *next, *parent, *subdir;
 void *data;
 read_proc_t *read_proc;
 write_proc_t *write_proc;
 atomic_t count;
 int pde_users;
 spinlock_t pde_unload_lock;
 struct completion *pde_unload_completion;
 struct list_head pde_openers;
};

enum kcore_type {
 KCORE_TEXT,
 KCORE_VMALLOC,
 KCORE_RAM,
 KCORE_VMEMMAP,
 KCORE_OTHER,
};

struct kcore_list {
 struct list_head list;
 unsigned long addr;
 size_t size;
 int type;
};

struct vmcore {
 struct list_head list;
 unsigned long long paddr;
 unsigned long long size;
 loff_t offset;
};
# 185 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/proc_fs.h"
static inline void proc_net_remove(struct net *net, const char *name) {}

static inline void proc_flush_task(struct task_struct *task)
{
}

static inline struct proc_dir_entry *create_proc_entry(const char *name,
 mode_t mode, struct proc_dir_entry *parent) { return ((void *)0); }
static inline struct proc_dir_entry *proc_create(const char *name,
 mode_t mode, struct proc_dir_entry *parent,
 const struct file_operations *proc_fops)
{
 return ((void *)0);
}
static inline struct proc_dir_entry *proc_create_data(const char *name,
 mode_t mode, struct proc_dir_entry *parent,
 const struct file_operations *proc_fops, void *data)
{
 return ((void *)0);
}


static inline struct proc_dir_entry *proc_symlink(const char *name,
  struct proc_dir_entry *parent,const char *dest) {return ((void *)0);}
static inline struct proc_dir_entry *proc_mkdir(const char *name,
 struct proc_dir_entry *parent) {return ((void *)0);}

static inline struct proc_dir_entry *create_proc_read_entry(const char *name,
 mode_t mode, struct proc_dir_entry *base,
 read_proc_t *read_proc, void * data) { return ((void *)0); }

struct tty_driver;
static inline void proc_tty_register_driver(struct tty_driver *driver) {};
static inline void proc_tty_unregister_driver(struct tty_driver *driver) {};

static inline int pid_ns_prepare_proc(struct pid_namespace *ns)
{
 return 0;
}

static inline void pid_ns_release_proc(struct pid_namespace *ns)
{
}

static inline void set_mm_exe_file(struct mm_struct *mm,
       struct file *new_exe_file)
{}

static inline struct file *get_mm_exe_file(struct mm_struct *mm)
{
 return ((void *)0);
}

static inline void dup_mm_exe_file(struct mm_struct *oldmm,
              struct mm_struct *newmm)
{}




static inline void
kclist_add(struct kcore_list *new, void *addr, size_t size, int type)
{
}




union proc_op {
 int (*proc_get_link)(struct inode *, struct path *);
 int (*proc_read)(struct task_struct *task, char *page);
 int (*proc_show)(struct seq_file *m,
  struct pid_namespace *ns, struct pid *pid,
  struct task_struct *task);
};

struct ctl_table_header;
struct ctl_table;

struct proc_inode {
 struct pid *pid;
 int fd;
 union proc_op op;
 struct proc_dir_entry *pde;
 struct ctl_table_header *sysctl;
 struct ctl_table *sysctl_entry;
 struct inode vfs_inode;
};

static inline struct proc_inode *PROC_I(const struct inode *inode)
{
 return container_of(inode, struct proc_inode, vfs_inode);
}

static inline struct proc_dir_entry *PDE(const struct inode *inode)
{
 return PROC_I(inode)->pde;
}

static inline struct net *PDE_NET(struct proc_dir_entry *pde)
{
 return pde->parent->data;
}

struct proc_maps_private {
 struct pid *pid;
 struct task_struct *task;



};
# 62 "board-zte-blade.c" 2
# 1 "./include/mach/zte_memlog.h" 1
# 17 "./include/mach/zte_memlog.h"
struct bad_block_table {
  unsigned int magic1;
  unsigned int magic2;
  unsigned int version;
  unsigned int num_entries;
  unsigned int bad_block[(((512*8) - (4 * sizeof(unsigned int)))/4)];
};

typedef struct {
  unsigned int ftm;
  unsigned int boot_reason;
  unsigned int reset_reason;
  unsigned int chg_count;
  unsigned int f3log;
  unsigned int err_fatal;
  unsigned int err_dload;
  char err_log[0x4000];
  struct bad_block_table bad_block_table;
  unsigned char flash_id[2];
  unsigned char sdrem_length;
} smem_global;
# 63 "board-zte-blade.c" 2
# 1 "devices.h" 1
# 20 "devices.h"
# 1 "clock.h" 1
# 23 "clock.h"
# 1 "./include/mach/clk.h" 1
# 38 "./include/mach/clk.h"
enum clk_reset_action {
 CLK_RESET_DEASSERT = 0,
 CLK_RESET_ASSERT = 1
};

struct clk;


int clk_set_min_rate(struct clk *clk, unsigned long rate);


int clk_set_max_rate(struct clk *clk, unsigned long rate);


int clk_reset(struct clk *clk, enum clk_reset_action action);


int clk_set_flags(struct clk *clk, unsigned long flags);
# 24 "clock.h" 2
# 36 "clock.h"
struct clk_ops {
 int (*enable)(unsigned id);
 void (*disable)(unsigned id);
 void (*auto_off)(unsigned id);
 int (*reset)(unsigned id, enum clk_reset_action action);
 int (*set_rate)(unsigned id, unsigned rate);
 int (*set_min_rate)(unsigned id, unsigned rate);
 int (*set_max_rate)(unsigned id, unsigned rate);
 int (*set_flags)(unsigned id, unsigned flags);
 unsigned (*get_rate)(unsigned id);
 int (*list_rate)(unsigned id, unsigned n);
 int (*measure_rate)(unsigned id);
 unsigned (*is_enabled)(unsigned id);
 long (*round_rate)(unsigned id, unsigned rate);
 int (*set_parent)(unsigned id, struct clk *parent);
};

struct clk {
 uint32_t id;
 uint32_t remote_id;
 uint32_t flags;
 struct clk_ops *ops;
 const char *dbg_name;
 struct list_head list;
 struct hlist_head voters;
 const char *aggregator;
};






enum clkvote_client {
 CLKVOTE_ACPUCLK = 0,
 CLKVOTE_PMQOS,
 CLKVOTE_MAX,
};




static inline void __attribute__ ((__section__(".init.text"))) notrace msm_clk_soc_set_ops(struct clk *clk) { }





static inline void __attribute__ ((__section__(".init.text"))) notrace msm_clk_soc_init(void) { }







static inline int __attribute__ ((__section__(".init.text"))) notrace clock_debug_init(struct list_head *head) { return 0; }
static inline int __attribute__ ((__section__(".init.text"))) notrace clock_debug_add(struct clk *clock) { return 0; }
static inline void clock_debug_print_enabled(void) { return; }


extern struct clk_ops clk_ops_remote;

static inline int msm_clock_require_tcxo(unsigned long *reason, int nbits)
{
 return 0;
}

static inline int msm_clock_get_name(uint32_t id, char *name, uint32_t size)
{
 return 0;
}

int ebi1_clk_set_min_rate(enum clkvote_client client, unsigned long rate);
unsigned long clk_get_max_axi_khz(void);
# 21 "devices.h" 2

extern struct platform_device msm_ebi0_thermal;
extern struct platform_device msm_ebi1_thermal;

extern struct platform_device msm_device_uart1;
extern struct platform_device msm_device_uart2;
extern struct platform_device msm_device_uart3;

extern struct platform_device msm_device_uart_dm1;
extern struct platform_device msm_device_uart_dm2;
extern struct platform_device msm_device_uart_dm3;
extern struct platform_device msm_device_uart_dm12;
extern struct platform_device msm_device_uart_gsbi9;

extern struct platform_device msm_device_sdc1;
extern struct platform_device msm_device_sdc2;
extern struct platform_device msm_device_sdc3;
extern struct platform_device msm_device_sdc4;

extern struct platform_device msm_device_hsusb_otg;
extern struct platform_device msm_device_hsusb_peripheral;
extern struct platform_device msm_device_gadget_peripheral;
extern struct platform_device msm_device_hsusb_host;
extern struct platform_device msm_device_hsusb_host2;

extern struct platform_device msm_device_otg;
extern struct platform_device usb_diag_device;
extern struct platform_device usb_diag_mdm_device;

extern struct platform_device msm_device_i2c;

extern struct platform_device msm_device_i2c_2;

extern struct platform_device qup_device_i2c;

extern struct platform_device msm_gsbi3_qup_i2c_device;
extern struct platform_device msm_gsbi4_qup_i2c_device;
extern struct platform_device msm_gsbi7_qup_i2c_device;
extern struct platform_device msm_gsbi8_qup_i2c_device;
extern struct platform_device msm_gsbi9_qup_i2c_device;
extern struct platform_device msm_gsbi12_qup_i2c_device;

extern struct platform_device msm_device_smd;
extern struct platform_device msm_device_dmov;

extern struct platform_device msm_device_nand;

extern struct platform_device msm_device_tssc;

extern struct platform_device msm_rotator_device;

extern struct platform_device msm_device_tsif;

extern struct platform_device msm_device_ssbi1;
extern struct platform_device msm_device_ssbi2;
extern struct platform_device msm_device_ssbi3;
extern struct platform_device msm_device_ssbi6;
extern struct platform_device msm_device_ssbi7;

extern struct platform_device msm_gsbi1_qup_spi_device;

extern struct platform_device msm_device_vidc_720p;

extern struct platform_device *msm_footswitch_devices[];
extern unsigned msm_num_footswitch_devices;

extern struct clk_lookup msm_clocks_7x01a[];
extern unsigned msm_num_clocks_7x01a;

extern struct clk_lookup msm_clocks_7x25[];
extern unsigned msm_num_clocks_7x25;

extern struct clk_lookup msm_clocks_7x27[];
extern unsigned msm_num_clocks_7x27;

extern struct clk_lookup msm_clocks_7x30[];
extern unsigned msm_num_clocks_7x30;

extern struct clk_lookup msm_clocks_8x50[];
extern unsigned msm_num_clocks_8x50;

extern struct clk_lookup msm_clocks_8x60[];
extern unsigned msm_num_clocks_8x60;

void __attribute__ ((__section__(".init.text"))) notrace msm_fb_register_device(char *name, void *data);
void __attribute__ ((__section__(".init.text"))) notrace msm_camera_register_device(void *, uint32_t, void *);
extern struct platform_device msm_device_touchscreen;
# 64 "board-zte-blade.c" 2
# 1 "socinfo.h" 1
# 42 "socinfo.h"
enum msm_cpu {
 MSM_CPU_UNKNOWN = 0,
 MSM_CPU_7X01,
 MSM_CPU_7X25,
 MSM_CPU_7X27,
 MSM_CPU_8X50,
 MSM_CPU_8X50A,
 MSM_CPU_7X30,
 MSM_CPU_8X55,
 MSM_CPU_8X60,
};

enum msm_cpu socinfo_get_msm_cpu(void);





uint32_t socinfo_get_id(void);
uint32_t socinfo_get_version(void);
char *socinfo_get_build_id(void);
uint32_t socinfo_get_platform_type(void);
uint32_t socinfo_get_platform_version(void);
int __attribute__ ((__section__(".init.text"))) notrace socinfo_init(void) __must_check;

static inline int cpu_is_msm7x01(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_7X01;
}

static inline int cpu_is_msm7x25(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_7X25;
}

static inline int cpu_is_msm7x27(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_7X27;
}

static inline int cpu_is_qsd8x50(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_8X50;
}

static inline int cpu_is_qsd8x50a(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_8X50A;
}

static inline int cpu_is_msm8x55(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_8X55;
}

static inline int cpu_is_msm7x30(void)
{
 enum msm_cpu cpu = socinfo_get_msm_cpu();

 do { if (cpu == MSM_CPU_UNKNOWN) ; } while(0);
 return cpu == MSM_CPU_7X30;
}
# 65 "board-zte-blade.c" 2

# 1 "msm-keypad-devices.h" 1
# 18 "msm-keypad-devices.h"
extern struct platform_device keypad_device_7k_ffa;
extern struct platform_device keypad_device_8k_ffa;
extern struct platform_device keypad_device_surf;
# 67 "board-zte-blade.c" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/android.h" 1
# 30 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/usb/android.h"
struct android_usb_platform_data {

 __u16 vendor_id;

 __u16 version;

 struct usb_composition *compositions;
 int num_compositions;

 char *product_name;
 char *manufacturer_name;


 int nluns;
 int self_powered;
};

struct usb_composition {
 __u16 product_id;
 unsigned long functions;
 __u16 adb_product_id;
 unsigned long adb_functions;
};


struct usb_mass_storage_platform_data {

 char *vendor;
 char *product;
 int release;


 int nluns;
};
# 69 "board-zte-blade.c" 2

# 1 "pm.h" 1
# 22 "pm.h"
# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpuidle.h" 1
# 24 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpuidle.h"
struct cpuidle_device;






struct cpuidle_state {
 char name[16];
 char desc[32];
 void *driver_data;

 unsigned int flags;
 unsigned int exit_latency;
 unsigned int power_usage;
 unsigned int target_residency;

 unsigned long long usage;
 unsigned long long time;

 int (*enter) (struct cpuidle_device *dev,
    struct cpuidle_state *state);
};
# 63 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpuidle.h"
static inline void * cpuidle_get_statedata(struct cpuidle_state *state)
{
 return state->driver_data;
}






static inline void
cpuidle_set_statedata(struct cpuidle_state *state, void *data)
{
 state->driver_data = data;
}

struct cpuidle_state_kobj {
 struct cpuidle_state *state;
 struct completion kobj_unregister;
 struct kobject kobj;
};

struct cpuidle_device {
 unsigned int registered:1;
 unsigned int enabled:1;
 unsigned int power_specified:1;
 unsigned int cpu;

 int last_residency;
 int state_count;
 struct cpuidle_state states[8];
 struct cpuidle_state_kobj *kobjs[8];
 struct cpuidle_state *last_state;

 struct list_head device_list;
 struct kobject kobj;
 struct completion kobj_unregister;
 void *governor_data;
 struct cpuidle_state *safe_state;

 int (*prepare) (struct cpuidle_device *dev);
};

extern __attribute__((section(".data" ""))) __typeof__(struct cpuidle_device *) cpuidle_devices;







static inline int cpuidle_get_last_residency(struct cpuidle_device *dev)
{
 return dev->last_residency;
}






struct cpuidle_driver {
 char name[16];
 struct module *owner;
};
# 144 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpuidle.h"
static inline int cpuidle_register_driver(struct cpuidle_driver *drv)
{return -19; }
static inline struct cpuidle_driver *cpuidle_get_driver(void) {return ((void *)0); }
static inline void cpuidle_unregister_driver(struct cpuidle_driver *drv) { }
static inline int cpuidle_register_device(struct cpuidle_device *dev)
{return -19; }
static inline void cpuidle_unregister_device(struct cpuidle_device *dev) { }

static inline void cpuidle_pause_and_lock(void) { }
static inline void cpuidle_resume_and_unlock(void) { }
static inline int cpuidle_enable_device(struct cpuidle_device *dev)
{return -19; }
static inline void cpuidle_disable_device(struct cpuidle_device *dev) { }







struct cpuidle_governor {
 char name[16];
 struct list_head governor_list;
 unsigned int rating;

 int (*enable) (struct cpuidle_device *dev);
 void (*disable) (struct cpuidle_device *dev);

 int (*select) (struct cpuidle_device *dev);
 void (*reflect) (struct cpuidle_device *dev);

 struct module *owner;
};
# 185 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/cpuidle.h"
static inline int cpuidle_register_governor(struct cpuidle_governor *gov)
{return 0;}
static inline void cpuidle_unregister_governor(struct cpuidle_governor *gov) { }
# 23 "pm.h" 2
# 31 "pm.h"
enum msm_pm_sleep_mode {
 MSM_PM_SLEEP_MODE_POWER_COLLAPSE_SUSPEND,
 MSM_PM_SLEEP_MODE_POWER_COLLAPSE,
 MSM_PM_SLEEP_MODE_APPS_SLEEP,
 MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT,
 MSM_PM_SLEEP_MODE_WAIT_FOR_INTERRUPT,
 MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN,
 MSM_PM_SLEEP_MODE_POWER_COLLAPSE_STANDALONE,
 MSM_PM_SLEEP_MODE_NR
};



struct msm_pm_platform_data {
 u8 supported;
 u8 suspend_enabled;
 u8 idle_enabled;
 u32 latency;

 u32 residency;

};

void msm_pm_set_platform_data(struct msm_pm_platform_data *data, int count);
int msm_pm_idle_prepare(struct cpuidle_device *dev);
int msm_pm_idle_enter(enum msm_pm_sleep_mode sleep_mode);
# 71 "board-zte-blade.c" 2

# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h" 1
# 54 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
enum kgsl_deviceid {
 KGSL_DEVICE_YAMATO = 0x00000000,
 KGSL_DEVICE_2D0 = 0x00000001,
 KGSL_DEVICE_2D1 = 0x00000002,
 KGSL_DEVICE_MAX = 0x00000003
};

enum kgsl_user_mem_type {
 KGSL_USER_MEM_TYPE_PMEM = 0x00000000,
 KGSL_USER_MEM_TYPE_ASHMEM = 0x00000001,
 KGSL_USER_MEM_TYPE_ADDR = 0x00000002
};

struct kgsl_devinfo {

 unsigned int device_id;



 unsigned int chip_id;
 unsigned int mmu_enabled;
 unsigned int gmem_gpubaseaddr;


 unsigned int gmem_hostbaseaddr;
 unsigned int gmem_sizebytes;
};





struct kgsl_devmemstore {
 volatile unsigned int soptimestamp;
 unsigned int sbz;
 volatile unsigned int eoptimestamp;
 unsigned int sbz2;
 volatile unsigned int ts_cmp_enable;
 unsigned int sbz3;
 volatile unsigned int ref_wait_ts;
 unsigned int sbz4;
};






enum kgsl_timestamp_type {
 KGSL_TIMESTAMP_CONSUMED = 0x00000001,
 KGSL_TIMESTAMP_RETIRED = 0x00000002,
 KGSL_TIMESTAMP_MAX = 0x00000002,
};


enum kgsl_property_type {
 KGSL_PROP_DEVICE_INFO = 0x00000001,
 KGSL_PROP_DEVICE_SHADOW = 0x00000002,
 KGSL_PROP_DEVICE_POWER = 0x00000003,
 KGSL_PROP_SHMEM = 0x00000004,
 KGSL_PROP_SHMEM_APERTURES = 0x00000005,
 KGSL_PROP_MMU_ENABLE = 0x00000006,
 KGSL_PROP_INTERRUPT_WAITS = 0x00000007,
};

struct kgsl_shadowprop {
 unsigned int gpuaddr;
 unsigned int size;
 unsigned int flags;
};
# 158 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
struct kgsl_ibdesc {
 unsigned int gpuaddr;
 void *hostptr;
 unsigned int sizedwords;
 unsigned int ctrl;
};
# 178 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
struct kgsl_device_getproperty {
 unsigned int type;
 void *value;
 unsigned int sizebytes;
};
# 192 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
struct kgsl_device_regread {
 unsigned int offsetwords;
 unsigned int value;
};
# 204 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
struct kgsl_device_waittimestamp {
 unsigned int timestamp;
 unsigned int timeout;
};
# 222 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
struct kgsl_ringbuffer_issueibcmds {
 unsigned int drawctxt_id;
 unsigned int ibdesc_addr;
 unsigned int numibs;
 unsigned int timestamp;
 unsigned int flags;
};







struct kgsl_cmdstream_readtimestamp {
 unsigned int type;
 unsigned int timestamp;
};
# 249 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/msm_kgsl.h"
struct kgsl_cmdstream_freememontimestamp {
 unsigned int gpuaddr;
 unsigned int type;
 unsigned int timestamp;
};







struct kgsl_drawctxt_create {
 unsigned int flags;
 unsigned int drawctxt_id;
};





struct kgsl_drawctxt_destroy {
 unsigned int drawctxt_id;
};






struct kgsl_map_user_mem {
 int fd;
 unsigned int gpuaddr;
 unsigned int len;
 unsigned int offset;
 unsigned int hostptr;
 enum kgsl_user_mem_type memtype;
 unsigned int reserved;

};





struct kgsl_sharedmem_from_pmem {
 int pmem_fd;
 unsigned int gpuaddr;
 unsigned int len;
 unsigned int offset;
};





struct kgsl_sharedmem_free {
 unsigned int gpuaddr;
};





struct kgsl_gmem_desc {
 unsigned int x;
 unsigned int y;
 unsigned int width;
 unsigned int height;
 unsigned int pitch;
};

struct kgsl_buffer_desc {
 void *hostptr;
 unsigned int gpuaddr;
 int size;
 unsigned int format;
 unsigned int pitch;
 unsigned int enabled;
};

struct kgsl_bind_gmem_shadow {
 unsigned int drawctxt_id;
 struct kgsl_gmem_desc gmem_desc;
 unsigned int shadow_x;
 unsigned int shadow_y;
 struct kgsl_buffer_desc shadow_buffer;
 unsigned int buffer_id;
};





struct kgsl_sharedmem_from_vmalloc {
 unsigned int gpuaddr;
 unsigned int hostptr;
 unsigned int flags;
};







struct kgsl_drawctxt_set_bin_base_offset {
 unsigned int drawctxt_id;
 unsigned int offset;
};




enum kgsl_cmdwindow_type {
 KGSL_CMDWINDOW_MIN = 0x00000000,
 KGSL_CMDWINDOW_2D = 0x00000000,
 KGSL_CMDWINDOW_3D = 0x00000001,
 KGSL_CMDWINDOW_MMU = 0x00000002,
 KGSL_CMDWINDOW_ARBITER = 0x000000FF,
 KGSL_CMDWINDOW_MAX = 0x000000FF,
};


struct kgsl_cmdwindow_write {
 enum kgsl_cmdwindow_type target;
 unsigned int addr;
 unsigned int data;
};
# 73 "board-zte-blade.c" 2



# 1 "msm_usb_config.h" 1
# 72 "msm_usb_config.h"
struct msm_hsusb_platform_data msm_hsusb_pdata = {
# 88 "msm_usb_config.h"
};
# 77 "board-zte-blade.c" 2


# 1 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lis302dl.h" 1
# 18 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lis302dl.h"
enum lis302dl_reg {
    LIS302DL_REG_WHO_AM_I = 0x0f,
    LIS302DL_REG_CTRL1 = 0x20,
    LIS302DL_REG_CTRL2 = 0x21,
    LIS302DL_REG_CTRL3 = 0x22,
    LIS302DL_REG_HP_FILTER_RESET = 0x23,
    LIS302DL_REG_STATUS = 0x27,
    LIS302DL_REG_OUT_X = 0x29,
    LIS302DL_REG_OUT_Y = 0x2b,
    LIS302DL_REG_OUT_Z = 0x2d,
    LIS302DL_REG_FF_WU_CFG_1 = 0x30,
    LIS302DL_REG_FF_WU_SRC_1 = 0x31,
    LIS302DL_REG_FF_WU_THS_1 = 0x32,
    LIS302DL_REG_FF_WU_DURATION_1 = 0x33,
    LIS302DL_REG_FF_WU_CFG_2 = 0x34,
    LIS302DL_REG_FF_WU_SRC_2 = 0x35,
    LIS302DL_REG_FF_WU_THS_2 = 0x36,
    LIS302DL_REG_FF_WU_DURATION_2 = 0x37,
    LIS302DL_REG_CLICK_CFG = 0x38,
    LIS302DL_REG_CLICK_SRC = 0x39,
    LIS302DL_REG_CLICK_THSY_X = 0x3b,
    LIS302DL_REG_CLICK_THSZ = 0x3c,
    LIS302DL_REG_CLICK_TIME_LIMIT = 0x3d,
    LIS302DL_REG_CLICK_LATENCY = 0x3e,
    LIS302DL_REG_CLICK_WINDOW = 0x3f,
};

enum lis302dl_reg_ctrl1 {
    LIS302DL_CTRL1_Xen = 0x01,
    LIS302DL_CTRL1_Yen = 0x02,
    LIS302DL_CTRL1_Zen = 0x04,
    LIS302DL_CTRL1_STM = 0x08,
    LIS302DL_CTRL1_STP = 0x10,
    LIS302DL_CTRL1_FS = 0x20,
    LIS302DL_CTRL1_PD = 0x40,
    LIS302DL_CTRL1_DR = 0x80,
};

enum lis302dl_reg_ctrl2 {
    LIS302DL_CTRL2_HPC1 = 0x01,
    LIS302DL_CTRL2_HPC2 = 0x02,
    LIS302DL_CTRL2_HPFF1 = 0x04,
    LIS302DL_CTRL2_HPFF2 = 0x08,
    LIS302DL_CTRL2_FDS = 0x10,
    LIS302DL_CTRL2_BOOT = 0x40,
    LIS302DL_CTRL2_SIM = 0x80,
};
enum lis302dl_reg_ctrl3 {
    LIS302DL_CTRL3_PP_OD = 0x40,
    LIS302DL_CTRL3_IHL = 0x80,
};

enum lis302dl_reg_status {
    LIS302DL_STATUS_XDA = 0x01,
    LIS302DL_STATUS_YDA = 0x02,
    LIS302DL_STATUS_ZDA = 0x04,
    LIS302DL_STATUS_XYZDA = 0x08,
    LIS302DL_STATUS_XOR = 0x10,
    LIS302DL_STATUS_YOR = 0x20,
    LIS302DL_STATUS_ZOR = 0x40,
    LIS302DL_STATUS_XYZOR = 0x80,
};
enum lis302dl_reg_ffwucfg {
    LIS302DL_FFWUCFG_XLIE = 0x01,
    LIS302DL_FFWUCFG_XHIE = 0x02,
    LIS302DL_FFWUCFG_YLIE = 0x04,
    LIS302DL_FFWUCFG_YHIE = 0x08,
    LIS302DL_FFWUCFG_ZLIE = 0x10,
    LIS302DL_FFWUCFG_ZHIE = 0x20,
    LIS302DL_FFWUCFG_LIR = 0x40,
    LIS302DL_FFWUCFG_AOI = 0x80,
};

enum lis302dl_reg_ffwuths {
    LIS302DL_FFWUTHS_DCRM = 0x80,
};

enum lis302dl_reg_ffwusrc {
    LIS302DL_FFWUSRC_XL = 0x01,
    LIS302DL_FFWUSRC_XH = 0x02,
    LIS302DL_FFWUSRC_YL = 0x04,
    LIS302DL_FFWUSRC_YH = 0x08,
    LIS302DL_FFWUSRC_ZL = 0x10,
    LIS302DL_FFWUSRC_ZH = 0x20,
    LIS302DL_FFWUSRC_IA = 0x40,
};

enum lis302dl_reg_cloik_src {
    LIS302DL_CLICKSRC_SINGLE_X = 0x01,
    LIS302DL_CLICKSRC_DOUBLE_X = 0x02,
    LIS302DL_CLICKSRC_SINGLE_Y = 0x04,
    LIS302DL_CLICKSRC_DOUBLE_Y = 0x08,
    LIS302DL_CLICKSRC_SINGLE_Z = 0x10,
    LIS302DL_CLICKSRC_DOUBLE_Z = 0x20,
    LIS302DL_CLICKSRC_IA = 0x40,
};
# 130 "/home/t0mm13b/CAF/ZTE-Blade-2.6.35/include/linux/lis302dl.h"
struct lis302dl_platform_data {
 unsigned short gpio_intr1;
 unsigned short gpio_intr2;
 unsigned short scale;
 unsigned short int_active_low;
};
# 80 "board-zte-blade.c" 2
# 116 "board-zte-blade.c"
static smem_global *global;



static int g_zte_ftm_flag_fixup;






static struct resource smc91x_resources[] = {
 [0] = {
  .start = 0x9C004300,
  .end = 0x9C0043ff,
  .flags = 0x00000200,
 },
 [1] = {
  .start = (NR_MSM_IRQS + (132)),
  .end = (NR_MSM_IRQS + (132)),
  .flags = 0x00000400,
 },
};
# 174 "board-zte-blade.c"
static struct usb_composition usb_func_composition[] = {

 {

  .product_id = 0x1353,
  .functions = 0x02,
  .adb_product_id = 0x1351,
  .adb_functions = 0x12
 },
 {

  .product_id = 0x1350,
  .functions = 0x12764,
  .adb_product_id = 0x1350,
  .adb_functions = 0x12764
 },
 {

  .product_id = 0x0111,
  .functions = 0x674,
  .adb_product_id = 0x0111,
  .adb_functions = 0x674
 },
 {

  .product_id = 0x0112,
  .functions = 0x4,
  .adb_product_id = 0x0112,
  .adb_functions = 0x4
 },
 {

  .product_id = 0x1355,
  .functions = 0x26,
  .adb_product_id = 0x1354,
  .adb_functions = 0x126
 },
 {

  .product_id = 0x0083,
  .functions = 0x2,
  .adb_product_id = 0x0083,
  .adb_functions = 0x2
 },
 {

  .product_id = 0x1364,
  .functions = 0x2A,
  .adb_product_id = 0x1364,
  .adb_functions = 0x12A
 },
 {

  .product_id = 0x1365,
  .functions = 0xA,
  .adb_product_id = 0x1365,
  .adb_functions = 0xA
 },
 {

  .product_id = 0x1373,
  .functions = 0xA,
  .adb_product_id = 0x1373,
  .adb_functions = 0x1A
 },
# 317 "board-zte-blade.c"
};
static struct android_usb_platform_data android_usb_pdata = {

 .vendor_id = 0x19d2,
 .version = 0x0100,
 .compositions = usb_func_composition,
 .num_compositions = ARRAY_SIZE(usb_func_composition),
 .product_name = "ZTE HSUSB Device",
 .manufacturer_name = "ZTE Incorporated",
 .nluns = 1,
# 336 "board-zte-blade.c"
};
static struct platform_device android_usb_device = {
 .name = "android_usb",
 .id = -1,
 .dev = {
  .platform_data = &android_usb_pdata,
 },
};

static struct platform_device smc91x_device = {
 .name = "smc91x",
 .id = 0,
 .num_resources = ARRAY_SIZE(smc91x_resources),
 .resource = smc91x_resources,
};
# 439 "board-zte-blade.c"
static int hsusb_rpc_connect(int connect)
{
 if (connect)
  return msm_hsusb_rpc_connect();
 else
  return msm_hsusb_rpc_close();
}






static int msm_hsusb_rpc_phy_reset(void *addr)
{
        return msm_hsusb_phy_reset();
}

static struct msm_otg_platform_data msm_otg_pdata = {
 .rpc_connect = hsusb_rpc_connect,

 .phy_reset = msm_hsusb_rpc_phy_reset,

 .pmic_notif_init = msm_pm_app_rpc_init,
 .pmic_notif_deinit = msm_pm_app_rpc_deinit,
 .pmic_register_vbus_sn = msm_pm_app_register_vbus_sn,
 .pmic_unregister_vbus_sn = msm_pm_app_unregister_vbus_sn,
 .pmic_enable_ldo = msm_pm_app_enable_usb_ldo,
};


static struct msm_hsusb_gadget_platform_data msm_gadget_pdata;





static struct snd_endpoint snd_endpoints_list[] = {
 { .name = "HANDSET", .id = 0 },
 { .name = "MONO_HEADSET", .id = 2 },
 { .name = "HEADSET", .id = 3 },
 { .name = "SPEAKER", .id = 6 },
 { .name = "TTY_HEADSET", .id = 8 },
 { .name = "TTY_VCO", .id = 9 },
 { .name = "TTY_HCO", .id = 10 },
 { .name = "BT", .id = 12 },
 { .name = "IN_S_SADC_OUT_HANDSET", .id = 16 },
 { .name = "IN_S_SADC_OUT_SPEAKER_PHONE", .id = 25 },
 { .name = "HEADSET_AND_SPEAKER", .id = 26 },
 { .name = "CURRENT", .id = 28 },
};



static struct msm_snd_endpoints msm_device_snd_endpoints = {
 .endpoints = snd_endpoints_list,
 .num = sizeof(snd_endpoints_list) / sizeof(struct snd_endpoint)
};

static struct platform_device msm_device_snd = {
 .name = "msm_snd",
 .id = -1,
 .dev = {
  .platform_data = &msm_device_snd_endpoints
 },
};
# 526 "board-zte-blade.c"
static unsigned int dec_concurrency_table[] = {

 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DMA)), 0,
 0, 0, 0,


 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 ((1<<MSM_ADSP_CODEC_MIDI)),


 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 ((1<<MSM_ADSP_CODEC_MIDI)),


 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 ((1<<MSM_ADSP_CODEC_MIDI)),


 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 ((1<<MSM_ADSP_CODEC_MIDI)),


 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_TUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 ((1<<MSM_ADSP_CODEC_MIDI)),


 (((1<<MSM_ADSP_CODEC_MP3)| (1<<MSM_ADSP_CODEC_AAC)|(1<<MSM_ADSP_CODEC_WMA)| (1<<MSM_ADSP_CODEC_WMAPRO)|(1<<MSM_ADSP_CODEC_AMRWB)| (1<<MSM_ADSP_CODEC_AMRNB)|(1<<MSM_ADSP_CODEC_WAV)| (1<<MSM_ADSP_CODEC_ADPCM)|(1<<MSM_ADSP_CODEC_YADPCM)| (1<<MSM_ADSP_CODEC_EVRC)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 (((1<<MSM_ADSP_CODEC_WAV)|(1<<MSM_ADSP_CODEC_ADPCM)| (1<<MSM_ADSP_CODEC_YADPCM)|(1<<MSM_ADSP_CODEC_QCELP))|(1<<MSM_ADSP_MODE_NONTUNNEL)|(1<<MSM_ADSP_OP_DM)),
 ((1<<MSM_ADSP_CODEC_MIDI)),
};





static struct msm_adspdec_info dec_info_list[] = {
 { .module_name = "AUDPLAY0TASK", .module_queueid = 13, .module_decid = 0, .nr_codec_support = 11},
 { .module_name = "AUDPLAY1TASK", .module_queueid = 14, .module_decid = 1, .nr_codec_support = 4},
 { .module_name = "AUDPLAY2TASK", .module_queueid = 15, .module_decid = 2, .nr_codec_support = 4},




 { .module_name = "AUDPLAY3TASK", .module_queueid = 16, .module_decid = 3, .nr_codec_support = 4},
 { .module_name = "AUDPLAY4TASK", .module_queueid = 17, .module_decid = 4, .nr_codec_support = 1},

};

static struct msm_adspdec_database msm_device_adspdec_database = {
 .num_dec = ARRAY_SIZE(dec_info_list),
 .num_concurrency_support = (ARRAY_SIZE(dec_concurrency_table) / ARRAY_SIZE(dec_info_list)),

 .dec_concurrency_table = dec_concurrency_table,
 .dec_info_list = dec_info_list,
};

static struct platform_device msm_device_adspdec = {
 .name = "msm_adspdec",
 .id = -1,
 .dev = {
  .platform_data = &msm_device_adspdec_database
 },
};

static struct android_pmem_platform_data android_pmem_kernel_ebi1_pdata = {
 .name = PMEM_KERNEL_EBI1_DATA_NAME,






 .cached = 0,
};

static struct android_pmem_platform_data android_pmem_pdata = {
 .name = "pmem",
 .allocator_type = PMEM_ALLOCATORTYPE_BITMAP,
 .cached = 1,
};

static struct android_pmem_platform_data android_pmem_adsp_pdata = {
 .name = "pmem_adsp",
 .allocator_type = PMEM_ALLOCATORTYPE_BITMAP,
 .cached = 0,
};

static struct android_pmem_platform_data android_pmem_audio_pdata = {
 .name = "pmem_audio",
 .allocator_type = PMEM_ALLOCATORTYPE_BITMAP,
 .cached = 0,
};

static struct platform_device android_pmem_device = {
 .name = "android_pmem",
 .id = 0,
 .dev = { .platform_data = &android_pmem_pdata },
};

static struct platform_device android_pmem_adsp_device = {
 .name = "android_pmem",
 .id = 1,
 .dev = { .platform_data = &android_pmem_adsp_pdata },
};

static struct platform_device android_pmem_audio_device = {
 .name = "android_pmem",
 .id = 2,
 .dev = { .platform_data = &android_pmem_audio_pdata },
};

static struct platform_device android_pmem_kernel_ebi1_device = {
 .name = "android_pmem",
 .id = 4,
 .dev = { .platform_data = &android_pmem_kernel_ebi1_pdata },
};

static struct msm_handset_platform_data hs_platform_data = {
 .hs_name = "7k_handset",
 .pwr_key_delay_ms = 500,
};

static struct platform_device hs_device = {
 .name = "msm-handset",
 .id = -1,
 .dev = {
  .platform_data = &hs_platform_data,
 },
};
# 695 "board-zte-blade.c"
static struct msm_rpc_endpoint *lcdc_ep;

static int msm_fb_lcdc_config(int on)
{
 int rc = 0;
 struct rpc_request_hdr hdr;

 if (on)
  pr_info("lcdc config\n");
 else
  pr_info("lcdc un-config\n");

 lcdc_ep = msm_rpc_connect_compatible(0x30000066, 0x00010001, 0);
 if (IS_ERR(lcdc_ep)) {
  printk(KERN_ERR "%s: msm_rpc_connect failed! rc = %ld\n",
   __func__, PTR_ERR(lcdc_ep));
  return -22;
 }

 rc = msm_rpc_call(lcdc_ep,
    (on) ? 21 : 22,
    &hdr, sizeof(hdr),
    5 * 100);
 if (rc)
  printk(KERN_ERR
   "%s: msm_rpc_call failed! rc = %d\n", __func__, rc);

 msm_rpc_close(lcdc_ep);
 return rc;
}



static int gpio_array_num[] = {
    124,
    122,
    132,
    123,
    91,
    };

static void lcdc_lead_gpio_init(void)
{
 if (gpio_request(124, "spi_clk"))
  pr_err("failed to request gpio spi_clk\n");
 if (gpio_request(122, "spi_cs"))
  pr_err("failed to request gpio spi_cs\n");
 if (gpio_request(132, "spi_sdi"))
  pr_err("failed to request gpio spi_sdi\n");
 if (gpio_request(123, "spi_sdoi"))
  pr_err("failed to request gpio spi_sdoi\n");
 if (gpio_request(91, "gpio_dac"))
  pr_err("failed to request gpio_dac\n");
}

static uint32_t lcdc_gpio_table[] = {
 ((((124) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17)),
 ((((122) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17)),
 ((((132) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_INPUT) & 0x1) << 14) | (((GPIO_PULL_UP) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17)),
 ((((123) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17)),
 ((((91) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17)), };
# 788 "board-zte-blade.c"
static void config_lcdc_gpio_table(uint32_t *table, int len, unsigned enable)
{
 int n, rc;
 for (n = 0; n < len; n++) {
  rc = gpio_tlmm_config(table[n],
   enable ? GPIO_ENABLE : GPIO_DISABLE);
  if (rc) {
   printk(KERN_ERR "%s: gpio_tlmm_config(%#x)=%d\n",
    __func__, table[n], rc);
   break;
  }
 }
}



static void lcdc_lead_config_gpios(int enable)



{
 config_lcdc_gpio_table(lcdc_gpio_table,
  ARRAY_SIZE(lcdc_gpio_table), enable);
}

static char *msm_fb_lcdc_vreg[] = {
 "gp5"
};

static int msm_fb_lcdc_power_save(int on)
{
 struct vreg *vreg[ARRAY_SIZE(msm_fb_lcdc_vreg)];
 int i, rc = 0;

 for (i = 0; i < ARRAY_SIZE(msm_fb_lcdc_vreg); i++) {
  if (on) {
   vreg[i] = vreg_get(0, msm_fb_lcdc_vreg[i]);
   rc = vreg_enable(vreg[i]);
   if (rc) {
    printk(KERN_ERR "vreg_enable: %s vreg"
      "operation failed \n",
      msm_fb_lcdc_vreg[i]);
    goto bail;
   }
  } else {
   int tmp;
   vreg[i] = vreg_get(0, msm_fb_lcdc_vreg[i]);
   tmp = vreg_disable(vreg[i]);
   if (tmp) {
    printk(KERN_ERR "vreg_disable: %s vreg "
      "operation failed \n",
      msm_fb_lcdc_vreg[i]);
    if (!rc)
     rc = tmp;
   }
# 857 "board-zte-blade.c"
  }
 }

 return rc;

bail:
 if (on) {
  for (; i > 0; i--)
   vreg_disable(vreg[i - 1]);
 }

 return rc;
}
static struct lcdc_platform_data lcdc_pdata = {
 .lcdc_gpio_config = msm_fb_lcdc_config,
 .lcdc_power_save = msm_fb_lcdc_power_save,
};



static struct msm_panel_common_pdata lcdc_qvga_panel_data = {
 .panel_config_gpio = lcdc_lead_config_gpios,
 .gpio_num = gpio_array_num,
};

static struct platform_device lcdc_qvga_panel_device = {
 .name = "lcdc_panel_qvga",
 .id = 0,
 .dev = {
  .platform_data = &lcdc_qvga_panel_data,
 }
};
# 904 "board-zte-blade.c"
static struct resource msm_fb_resources[] = {
 {
  .flags = 0x00000800,
 }
};

static int msm_fb_detect_panel(const char *name)
{
 int ret = -1;

 if ((0) || (0)) {
  if (!strcmp(name, "lcdc_gordon_vga"))
   ret = 0;
  else
   ret = -19;
 }

 return ret;
}

static struct msm_fb_platform_data msm_fb_pdata = {
 .detect_client = msm_fb_detect_panel,
 .mddi_prescan = 1,
};

static struct platform_device msm_fb_device = {
 .name = "msm_fb",
 .id = 0,
 .num_resources = ARRAY_SIZE(msm_fb_resources),
 .resource = msm_fb_resources,
 .dev = {
  .platform_data = &msm_fb_pdata,
 }
};
# 1078 "board-zte-blade.c"
static struct resource kgsl_resources[] = {
 {
  .name = "kgsl_reg_memory",
  .start = 0xA0000000,
  .end = 0xA001ffff,
  .flags = 0x00000200,
 },
 {
  .name = "kgsl_phys_memory",
  .start = 0,
  .end = 0,
  .flags = 0x00000200,
 },
 {
  .name = "kgsl_yamato_irq",
  .start = INT_GRAPHICS,
  .end = INT_GRAPHICS,
  .flags = 0x00000400,
 },
};

static struct kgsl_platform_data kgsl_pdata;

static struct platform_device msm_device_kgsl = {
 .name = "kgsl",
 .id = -1,
 .num_resources = ARRAY_SIZE(kgsl_resources),
 .resource = kgsl_resources,
 .dev = {
  .platform_data = &kgsl_pdata,
 },
};


static struct platform_device msm_device_pmic_leds = {
 .name = "pmic-leds-status",
 .id = -1,
};


static struct gpio_led android_led_list[] = {
 {
  .name = "button-backlight",
  .gpio = 35,
 },
};

static struct gpio_led_platform_data android_leds_data = {
 .num_leds = ARRAY_SIZE(android_led_list),
 .leds = android_led_list,
};

static struct platform_device android_leds = {
 .name = "leds-gpio",
 .id = -1,
 .dev = {
  .platform_data = &android_leds_data,
 },
};


static struct resource bluesleep_resources[] = {
 {
  .name = "gpio_host_wake",
  .start = 83,
  .end = 83,
  .flags = 0x00000100,
 },
 {
  .name = "gpio_ext_wake",
  .start = 90,
  .end = 90,
  .flags = 0x00000100,
 },
 {
  .name = "host_wake",
  .start = (NR_MSM_IRQS + (83)),
  .end = (NR_MSM_IRQS + (83)),
  .flags = 0x00000400,
 },
};

static struct platform_device msm_bluesleep_device = {
 .name = "bluesleep",
 .id = -1,
 .num_resources = ARRAY_SIZE(bluesleep_resources),
 .resource = bluesleep_resources,
};

static struct i2c_board_info i2c_devices[] = {
# 1264 "board-zte-blade.c"
};


static struct i2c_gpio_platform_data aux_i2c_gpio_data = {
 .sda_pin = 93,
 .scl_pin = 92,
 .sda_is_open_drain = 1,
 .scl_is_open_drain = 1,
 .udelay = 40,
};

static struct platform_device aux_i2c_gpio_device = {
 .name = "i2c-gpio",
 .id = 1,
 .dev = {
  .platform_data = &aux_i2c_gpio_data
 },
};



static struct i2c_gpio_platform_data aux2_i2c_gpio_data = {
 .sda_pin = 109,
 .scl_pin = 107,
 .sda_is_open_drain = 0,
 .scl_is_open_drain = 1,
 .udelay = 2,
};

static struct platform_device aux2_i2c_gpio_device = {
 .name = "i2c-gpio",
 .id = 2,
 .dev = {
  .platform_data = &aux2_i2c_gpio_data
 },
};
# 2139 "board-zte-blade.c"
static u32 msm_calculate_batt_capacity(u32 current_voltage);

typedef struct
{
    u32 voltage;
    u32 capacity;
} BattFuelCapacity;

static const BattFuelCapacity fuelCapacity[] = {
   {3388, 0},
   {3500, 10},
   {3660, 20},
   {3710, 30},
   {3761, 40},
   {3801, 50},
   {3842, 60},
   {3909, 70},
   {3977, 80},
   {4066, 90},
   {4150, 100}
};

static struct msm_psy_batt_pdata msm_psy_batt_data = {
 .voltage_min_design = 2800,
 .voltage_max_design = 4300,
 .avail_chg_sources = 0x00000001 | 0x00000002 ,
 .batt_technology = POWER_SUPPLY_TECHNOLOGY_LION,
 .calculate_capacity = &msm_calculate_batt_capacity,
};

static u32 msm_calculate_batt_capacity(u32 current_voltage)
{
    u8 step = sizeof(fuelCapacity)/sizeof(BattFuelCapacity);
    u8 table_count;

    if (current_voltage <= fuelCapacity[0].voltage)
    {
        return 0;
    }
    else if (current_voltage >= fuelCapacity[step-1].voltage)
    {
        return 100;
    }
    else
    {
        for (table_count = 1; table_count< step; table_count++)
        {
            if (current_voltage <= fuelCapacity[table_count].voltage)
            {
                return (fuelCapacity[table_count-1].capacity
                    + ((current_voltage - fuelCapacity[table_count-1].voltage)*10
                    /(fuelCapacity[table_count].voltage -
                    fuelCapacity[table_count-1].voltage)));
            }
        }
    }

    printk("%s: error\n", __func__);
    return 0;
}

static struct platform_device msm_batt_device = {
 .name = "msm-battery",
 .id = -1,
 .dev.platform_data = &msm_psy_batt_data,
};




static struct resource ram_console_resource[] = {
 {
  .start = 0x02500000,
  .end = 0x02500000 + 0x00100000 - 1,
  .flags = 0x00000200,
 },
};

static struct platform_device ram_console_device = {
 .name = "ram_console",
 .id = -1,
 .num_resources = ARRAY_SIZE(ram_console_resource),
 .resource = ram_console_resource,
};



static struct platform_device msm_wlan_ar6000_pm_device = {
 .name = "wlan_ar6000_pm_dev",
 .id = 1,
 .num_resources = 0,
 .resource = ((void *)0),
};


static struct platform_device *early_devices[] __attribute__ ((__section__(".init.data"))) = {
# 2243 "board-zte-blade.c"
};

static struct platform_device *devices[] __attribute__ ((__section__(".init.data"))) = {






 &msm_wlan_ar6000_pm_device,



 &msm_device_uart3,

 &msm_device_smd,
 &msm_device_dmov,
 &msm_device_nand,


 &msm_device_otg,

 &msm_device_gadget_peripheral,
# 2275 "board-zte-blade.c"
 &android_usb_device,

 &msm_device_i2c,
 &aux_i2c_gpio_device,
 &aux2_i2c_gpio_device,
 &smc91x_device,




 &android_pmem_kernel_ebi1_device,
 &android_pmem_device,
 &android_pmem_adsp_device,
 &android_pmem_audio_device,
 &msm_fb_device,

 &lcdc_qvga_panel_device,



 &msm_device_uart_dm1,



 &msm_device_pmic_leds,
 &android_leds,
 &msm_device_snd,
 &msm_device_adspdec,
# 2321 "board-zte-blade.c"
 &msm_bluesleep_device,

 &msm_device_kgsl,
# 2350 "board-zte-blade.c"
 &hs_device,
 &msm_batt_device,

 &ram_console_device,

};

static struct msm_panel_common_pdata mdp_pdata = {
 .gpio = 97,
};

static void __attribute__ ((__section__(".init.text"))) notrace msm_fb_add_devices(void)
{
 msm_fb_register_device("mdp", &mdp_pdata);
 msm_fb_register_device("pmdh", 0);
 msm_fb_register_device("lcdc", &lcdc_pdata);
}


static struct i2c_board_info aux_i2c_devices[] = {
# 2379 "board-zte-blade.c"
 {
  I2C_BOARD_INFO("si4708", 0x10),
 },

 {
  .type = "taos",
  .addr = 0x39,
 },

};

static struct lis302dl_platform_data gsensor = {
 .gpio_intr1 = 84,
 .gpio_intr2 = 85,
 .scale = 2 ,
 .int_active_low = 1,
};


static struct i2c_board_info aux2_i2c_devices[] = {
 {
  I2C_BOARD_INFO("akm8973", 0x1c),
 },
 {
  .type = "lis302dl",
  .addr = 0x1d,
  .platform_data = &gsensor,
 },
};

extern struct sys_timer msm_timer;

static void __attribute__ ((__section__(".init.text"))) notrace msm7x2x_init_irq(void)
{
 msm_init_irq();
}

static struct msm_acpu_clock_platform_data msm7x2x_clock_data = {
 .acpu_switch_time_us = 50,
 .max_speed_delta_khz = 256000,
 .vdd_switch_time_us = 62,
 .max_axi_khz = 160000,
};

void msm_serial_debug_init(unsigned int base, int irq,
      struct device *clk_device, int signal_irq);
# 2749 "board-zte-blade.c"
static struct msm_pm_platform_data msm7x25_pm_data[MSM_PM_SLEEP_MODE_NR] = {
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE].latency = 16000,

 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN].latency = 12000,

 [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].latency = 2000,
};

static struct msm_pm_platform_data msm7x27_pm_data[MSM_PM_SLEEP_MODE_NR] = {
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE].supported = 1,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE].suspend_enabled = 1,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE].idle_enabled = 1,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE].latency = 16000,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE].residency = 20000,

 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN].supported = 1,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN].suspend_enabled = 1,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN].idle_enabled = 1,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN].latency = 12000,
 [MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN].residency = 20000,

 [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].supported = 1,
 [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].suspend_enabled
  = 1,
 [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].idle_enabled = 1,
 [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].latency = 2000,
 [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].residency = 0,
};

static void
msm_i2c_gpio_config(int iface, int config_type)
{
 int gpio_scl;
 int gpio_sda;
 if (iface) {
  gpio_scl = 95;
  gpio_sda = 96;
 } else {
  gpio_scl = 60;
  gpio_sda = 61;
 }
 if (config_type) {
  gpio_tlmm_config(((((gpio_scl) & 0x3FF) << 4) | ((1) & 0xf) | (((GPIO_INPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_16MA) & 0xF) << 17)), GPIO_ENABLE);

  gpio_tlmm_config(((((gpio_sda) & 0x3FF) << 4) | ((1) & 0xf) | (((GPIO_INPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_16MA) & 0xF) << 17)), GPIO_ENABLE);

 } else {
  gpio_tlmm_config(((((gpio_scl) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_16MA) & 0xF) << 17)), GPIO_ENABLE);

  gpio_tlmm_config(((((gpio_sda) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_NO_PULL) & 0x3) << 15) | (((GPIO_16MA) & 0xF) << 17)), GPIO_ENABLE);

 }
}

static struct msm_i2c_platform_data msm_i2c_pdata = {

 .clk_freq = 100000,
 .rmutex = 0,
 .pri_clk = 60,
 .pri_dat = 61,






 .msm_i2c_config_gpio = msm_i2c_gpio_config,
};

static void __attribute__ ((__section__(".init.text"))) notrace msm_device_i2c_init(void)
{
 if (gpio_request(60, "i2c_pri_clk"))
  pr_err("failed to request gpio i2c_pri_clk\n");
 if (gpio_request(61, "i2c_pri_dat"))
  pr_err("failed to request gpio i2c_pri_dat\n");
# 2833 "board-zte-blade.c"
 if (cpu_is_msm7x27())
  msm_i2c_pdata.pm_lat =
  msm7x27_pm_data[MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN]
  .latency;
 else
  msm_i2c_pdata.pm_lat =
  msm7x25_pm_data[MSM_PM_SLEEP_MODE_POWER_COLLAPSE_NO_XO_SHUTDOWN]
  .latency;

 msm_device_i2c.dev.platform_data = &msm_i2c_pdata;
}





static unsigned usb_config_power_on = ((((21) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_OUTPUT) & 0x1) << 14) | (((GPIO_PULL_UP) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17));

static int init_usb3v3(void)
{
 int rc;
 rc = gpio_tlmm_config(usb_config_power_on,GPIO_ENABLE);
 if (rc) {
  printk(KERN_ERR "%s: gpio_tlmm_config(%#x)=%d\n",__func__, 21, rc);
  return -5;
 }
 rc = gpio_request(21, "usb");
 if(!rc)
 {
  gpio_direction_output(21, 1);
  gpio_set_value(21, 1);
  printk(KERN_ERR "gpio_request: %d ok!\n", 21);
 }
 else
 {
  printk(KERN_ERR "gpio_request: %d failed!\n", 21);
 }
 gpio_free(21);
 return 0;
}




static void usb_mpp_init(void)
{
 unsigned rc;
 unsigned mpp_usb = 7;

 if ((0) || (0)) {
  rc = mpp_config_digital_out(mpp_usb,
   ((((MPP_DLOGIC_LVL_VDD) & 0x0FFFF) << 16) | ((MPP_DLOGIC_OUT_CTRL_HIGH) & 0x0FFFF)));

  if (rc)
   pr_err("%s: configuring mpp pin"
    "to enable 3.3V LDO failed\n", __func__);
 }
}

 extern void __attribute__ ((__section__(".init.text"))) notrace msm_init_pmic_vibrator(void);


static ssize_t debug_global_read(struct file *file, char *buf,
        size_t len, loff_t *offset)
{
 loff_t pos = *offset;
 ssize_t count;
 ssize_t size;

 size = sizeof(smem_global);

 if (pos >= size)
  return 0;

 count = min(len, (size_t)(size - pos));
 if (copy_to_user(buf, (char *)global + pos, count))
  return -14;

 *offset += count;
 return count;
}

static struct file_operations debug_global_file_ops = {
 .owner = ((struct module *)0),
 .read = debug_global_read,
};

static void __attribute__ ((__section__(".init.text"))) notrace msm7x2x_init(void)
{
 struct proc_dir_entry *entry;





 if (socinfo_init() < 0)
  do {} while(0);



 msm_clock_init(msm_clocks_7x27, msm_num_clocks_7x27);

 platform_add_devices(early_devices, ARRAY_SIZE(early_devices));





 if ((0) || (0)) {
  smc91x_resources[0].start = 0x98000300;
  smc91x_resources[0].end = 0x980003ff;
  smc91x_resources[1].start = (NR_MSM_IRQS + (85));
  smc91x_resources[1].end = (NR_MSM_IRQS + (85));
  if (gpio_tlmm_config(((((85) & 0x3FF) << 4) | ((0) & 0xf) | (((GPIO_INPUT) & 0x1) << 14) | (((GPIO_PULL_DOWN) & 0x3) << 15) | (((GPIO_2MA) & 0xF) << 17)),



         GPIO_ENABLE)) {
   printk(KERN_ERR
          "%s: Err: Config GPIO-85 INT\n",
    __func__);
  }
 }

 if (cpu_is_msm7x27())
  msm7x2x_clock_data.max_axi_khz = 200000;

 msm_acpu_clock_init(&msm7x2x_clock_data);

 init_usb3v3();



 map_zero_page_strongly_ordered();




 kgsl_pdata.high_axi_3d = 160000;



 kgsl_pdata.max_grp2d_freq = 0;
 kgsl_pdata.min_grp2d_freq = 0;
 kgsl_pdata.set_grp2d_async = ((void *)0);
 kgsl_pdata.max_grp3d_freq = 0;
 kgsl_pdata.min_grp3d_freq = 0;
 kgsl_pdata.set_grp3d_async = ((void *)0);
 kgsl_pdata.imem_clk_name = "imem_clk";
 kgsl_pdata.grp3d_clk_name = "grp_clk";
 kgsl_pdata.grp2d_clk_name = ((void *)0);






 usb_mpp_init();
# 3001 "board-zte-blade.c"
 msm_device_otg.dev.platform_data = &msm_otg_pdata;
 if ((0) || (0)) {
  msm_otg_pdata.pemp_level =
   PRE_EMPHASIS_WITH_20_PERCENT;
  msm_otg_pdata.drv_ampl = HS_DRV_AMPLITUDE_5_PERCENT;
  msm_otg_pdata.cdr_autoreset = CDR_AUTO_RESET_ENABLE;
  msm_otg_pdata.phy_reset_sig_inverted = 1;
 }
 if ((0) || (0)) {
  msm_otg_pdata.pemp_level =
   PRE_EMPHASIS_WITH_10_PERCENT;
  msm_otg_pdata.drv_ampl = HS_DRV_AMPLITUDE_5_PERCENT;
  msm_otg_pdata.cdr_autoreset = CDR_AUTO_RESET_DISABLE;
  msm_otg_pdata.phy_reset_sig_inverted = 1;
 }


 msm_gadget_pdata.swfi_latency =
  msm7x27_pm_data
  [MSM_PM_SLEEP_MODE_RAMP_DOWN_AND_WAIT_FOR_INTERRUPT].latency;
 msm_device_gadget_peripheral.dev.platform_data = &msm_gadget_pdata;


 msm_init_pmic_vibrator();


 platform_add_devices(devices, ARRAY_SIZE(devices));



 msm_device_i2c_init();
 i2c_register_board_info(0, i2c_devices, ARRAY_SIZE(i2c_devices));

 i2c_register_board_info(1, aux_i2c_devices, ARRAY_SIZE(aux_i2c_devices));

 i2c_register_board_info(2, aux2_i2c_devices, ARRAY_SIZE(aux2_i2c_devices));
# 3048 "board-zte-blade.c"
 lcdc_gordon_gpio_init();

 msm_fb_add_devices();



 do {} while (0);
 do {} while (0);

 if (cpu_is_msm7x27())
  msm_pm_set_platform_data(msm7x27_pm_data,
     ARRAY_SIZE(msm7x27_pm_data));
 else
  msm_pm_set_platform_data(msm7x25_pm_data,
     ARRAY_SIZE(msm7x25_pm_data));


 global = ioremap((MSM_SMEM_RAM_PHYS + ((1UL) << 12)), sizeof(smem_global));
 if (!global) {
  printk(KERN_ERR "ioremap failed with SCL_SMEM_LOG_RAM_BASE\n");
  return;
 }
 entry = create_proc_entry("smem_global", 0100000 | S_IRUGO, ((void *)0));
 if (!entry) {
  printk(KERN_ERR "smem_global: failed to create proc entry\n");
  return;
 }
 entry->proc_fops = &debug_global_file_ops;
 entry->size = sizeof(smem_global);
}

static unsigned pmem_kernel_ebi1_size = 0x1C000;
static void __attribute__ ((__section__(".init.text"))) notrace pmem_kernel_ebi1_size_setup(char **p)
{
 pmem_kernel_ebi1_size = memparse(*p, p);
}
__early_param("pmem_kernel_ebi1_size=", pmem_kernel_ebi1_size_setup);

static unsigned pmem_mdp_size = 0x1B76000;
static void __attribute__ ((__section__(".init.text"))) notrace pmem_mdp_size_setup(char **p)
{
 pmem_mdp_size = memparse(*p, p);
}
__early_param("pmem_mdp_size=", pmem_mdp_size_setup);

static unsigned pmem_adsp_size = 0xAE4000;
static void __attribute__ ((__section__(".init.text"))) notrace pmem_adsp_size_setup(char **p)
{
 pmem_adsp_size = memparse(*p, p);
}
__early_param("pmem_adsp_size=", pmem_adsp_size_setup);

static unsigned fb_size = 0x177000;
static void __attribute__ ((__section__(".init.text"))) notrace fb_size_setup(char **p)
{
 fb_size = memparse(*p, p);
}
__early_param("fb_size=", fb_size_setup);

static void __attribute__ ((__section__(".init.text"))) notrace msm_msm7x2x_allocate_memory_regions(void)
{
 void *addr;
 unsigned long size;
# 3121 "board-zte-blade.c"
 size = pmem_mdp_size;
 if (size) {
  addr = __alloc_bootmem(size, (1 << CONFIG_ARM_L1_CACHE_SHIFT), (((unsigned long)(0xffffffff)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
  android_pmem_pdata.start = (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
  android_pmem_pdata.size = size;
  pr_info("allocating %lu bytes at %p (%lx physical) for mdp "
   "pmem arena\n", size, addr, (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
 }

 size = pmem_adsp_size;
 if (size) {
  addr = __alloc_bootmem(size, (1 << CONFIG_ARM_L1_CACHE_SHIFT), (((unsigned long)(0xffffffff)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
  android_pmem_adsp_pdata.start = (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
  android_pmem_adsp_pdata.size = size;
  pr_info("allocating %lu bytes at %p (%lx physical) for adsp "
   "pmem arena\n", size, addr, (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
 }

 size = 0x5B000 ;
 android_pmem_audio_pdata.start = 0x80000ul ;
 android_pmem_audio_pdata.size = size;
 pr_info("allocating %lu bytes (at %lx physical) for audio "
  "pmem arena\n", size , 0x80000ul);

 size = fb_size ? : 0x177000;
 addr = __alloc_bootmem(size, (1 << CONFIG_ARM_L1_CACHE_SHIFT), (((unsigned long)(0xffffffff)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
 msm_fb_resources[0].start = (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
 msm_fb_resources[0].end = msm_fb_resources[0].start + size - 1;
 pr_info("allocating %lu bytes at %p (%lx physical) for fb\n",
  size, addr, (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));

 size = pmem_kernel_ebi1_size;
 if (size) {
  addr = alloc_bootmem_aligned(size, 0x100000);
  android_pmem_kernel_ebi1_pdata.start = (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
  android_pmem_kernel_ebi1_pdata.size = size;
  pr_info("allocating %lu bytes at %p (%lx physical) for kernel"
   " ebi1 pmem arena\n", size, addr, (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
 }

 size = 0x00200000;
 addr = __alloc_bootmem(size, (1 << CONFIG_ARM_L1_CACHE_SHIFT), (((unsigned long)(0xffffffff)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL)));
 kgsl_resources[1].start = (((unsigned long)(addr)) - ((CONFIG_PHYS_OFFSETUL)) + (CONFIG_PHYS_OFFSETUL));
 kgsl_resources[1].end = kgsl_resources[1].start + size - 1;
 pr_info("allocating %lu bytes (at %lx physical) for KGSL\n",
  size , 0xD600000ul);
# 3189 "board-zte-blade.c"
}

static void __attribute__ ((__section__(".init.text"))) notrace msm7x2x_map_io(void)
{
 msm_map_common_io();
 msm_msm7x2x_allocate_memory_regions();
# 3211 "board-zte-blade.c"
}




static int parse_tag_zteftm(const struct tag *tags)
{
        int flag = 0, find = 0;
        struct tag *t = (struct tag *)tags;

        for (; t->hdr.size; t = ((struct tag *)((__u32 *)(t) + (t)->hdr.size))) {
                if (t->hdr.tag == 0x5d53cd73) {
                        printk(KERN_DEBUG "find the zte ftm tag\n");
                        find = 1;
                        break;
                }
        }

        if (find)
                flag = t->u.revision.rev;
        printk(KERN_INFO "[ZYF@FTM]parse_tag_zteftm: zte FTM %s !\n",
        flag?"enable":"disable");
        return flag;
}

static void __attribute__ ((__section__(".init.text"))) notrace zte_fixup(struct machine_desc *desc, struct tag *tags,
        char **cmdline, struct meminfo *mi)
{
        g_zte_ftm_flag_fixup = parse_tag_zteftm((const struct tag *)tags);

}

int get_ftm_from_tag(void)
{
 return g_zte_ftm_flag_fixup;
}
;



static const struct machine_desc __mach_desc_MSM7X27_SURF __used __attribute__((__section__(".arch.info.init"))) = { .nr = 2705, .name = "QCT MSM7x27 SURF",




 .boot_params = (CONFIG_PHYS_OFFSETUL) + 0x100,
 .map_io = msm7x2x_map_io,
 .init_irq = msm7x2x_init_irq,
 .init_machine = msm7x2x_init,
 .timer = &msm_timer,
};

static const struct machine_desc __mach_desc_MSM7X27_FFA __used __attribute__((__section__(".arch.info.init"))) = { .nr = 2706, .name = "QCT MSM7x27 FFA",




 .boot_params = (CONFIG_PHYS_OFFSETUL) + 0x100,
 .map_io = msm7x2x_map_io,
 .init_irq = msm7x2x_init_irq,
 .init_machine = msm7x2x_init,
 .timer = &msm_timer,
};

static const struct machine_desc __mach_desc_MSM7X25_SURF __used __attribute__((__section__(".arch.info.init"))) = { .nr = 2703, .name = "QCT MSM7x25 SURF",




 .boot_params = (CONFIG_PHYS_OFFSETUL) + 0x100,
 .map_io = msm7x2x_map_io,
 .init_irq = msm7x2x_init_irq,
 .init_machine = msm7x2x_init,
 .timer = &msm_timer,
};

static const struct machine_desc __mach_desc_MSM7X25_FFA __used __attribute__((__section__(".arch.info.init"))) = { .nr = 2704, .name = "QCT MSM7x25 FFA",




 .boot_params = (CONFIG_PHYS_OFFSETUL) + 0x100,
 .map_io = msm7x2x_map_io,
 .init_irq = msm7x2x_init_irq,
 .init_machine = msm7x2x_init,
 .timer = &msm_timer,
};

static const struct machine_desc __mach_desc_BLADE __used __attribute__((__section__(".arch.info.init"))) = { .nr = MACH_TYPE_BLADE, .name = "blade ZTE handset",




 .boot_params = (CONFIG_PHYS_OFFSETUL) + 0x100,

        .fixup = zte_fixup,

 .map_io = msm7x2x_map_io,
 .init_irq = msm7x2x_init_irq,
 .init_machine = msm7x2x_init,
 .timer = &msm_timer,
};
