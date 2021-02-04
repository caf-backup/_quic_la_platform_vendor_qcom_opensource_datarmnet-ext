/* Copyright (c) 2018-2021 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/skbuff.h>
#include <linux/in.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <linux/tcp.h>
#include <linux/udp.h>
#include "rmnet_shs_wq.h"
#ifndef DATARMNETbd5709177a
#define DATARMNETbd5709177a
#include "rmnet_shs_freq.h"
#include "rmnet_config.h"
#include "rmnet_map.h"
#include "rmnet_private.h"
#include "rmnet_handlers.h"
#include "rmnet_trace.h"
#include "qmi_rmnet.h"
#define DATARMNETe603c3a4b3 DATARMNETbfe1afe595
#define DATARMNET25437d35fd 9
#define DATARMNET4899358462 (0xec7+1108-0x12fd)
#define DATARMNET401583e606 (0xd11+230-0xdf3)
#define DATARMNETc6782fed88  (0xd35+210-0xdff)
#define DATARMNETbc3c416b77 (0xbf7+4405-0x1c3c)
#define DATARMNET9273f84bf1 (0xeb7+1101-0x12f5)
#define DATARMNET2edff26954 (0xd2d+202-0xdf7)
#define DATARMNET752465942a (0xbf7+4364-0x1c04)
#define DATARMNETbfe31ef643 (0xc07+1233-0xe1c)
#define DATARMNET7a815512d3 (0xef7+1100-0x12fd)
#define DATARMNET270b564b55  (0xd27+224-0xdfd)
#define DATARMNET1c2d76f636 (0xf07+658-0x110d)
#define DATARMNET2922c89d50  (0xd1f+216-0xdf5)
#define DATARMNET015fb2ba0e(...) \
  do { if (DATARMNET756bdd424a) trace_rmnet_shs_err(__VA_ARGS__); } while (\
(0xd2d+202-0xdf7))
#define DATARMNET52de1f3dc0(...) \
  do { if (DATARMNET756bdd424a) trace_rmnet_shs_high(__VA_ARGS__); } while (\
(0xd2d+202-0xdf7))
#define DATARMNETda96251102(...) \
  do { if (DATARMNET756bdd424a) trace_rmnet_shs_low(__VA_ARGS__); } while (\
(0xd2d+202-0xdf7))
#define DATARMNETd82a2ed45e  204800
#define DATARMNETc668d192f2 (0xec7+1093-0x12f5) 
#define DATARMNETb38cb72105 80000
#define DATARMNETfbee9e182e 60000
#define DATARMNETac6d632788 (80000*DATARMNETc668d192f2)
#define DATARMNET243c638e7d 210000
#define DATARMNET03fd42433e (210000*DATARMNETc668d192f2)
#define DATARMNET9bc9e0cac3 (0xd2d+202-0xdf7)
#define DATARMNET22feab5726 40000
#define DATARMNET4298ee0d38 (40000*DATARMNETc668d192f2)
#define DATARMNET3a9bca9cba 20000
#define DATARMNETcdee526004 (DATARMNET243c638e7d / (0xd1f+216-0xdf5))
struct DATARMNETa6f2d499b2{struct hrtimer DATARMNET758a55f103;struct work_struct
 DATARMNET33110a3ff5;struct timespec DATARMNET251b97a380;int DATARMNETe61d62310f
;u8 DATARMNET42c3ecbd5e;};struct DATARMNETa6b20d7e8b{struct hrtimer 
DATARMNET6fd692fc7a;struct rmnet_map_dl_ind DATARMNET08dbb5ab35;struct 
qmi_rmnet_ps_ind rmnet_idl_ind_cb;struct rmnet_port*port;struct 
DATARMNETa6f2d499b2 DATARMNET132b9c7dc4[DATARMNETc6782fed88];u64 
DATARMNETbd3a0ee74e[DATARMNETc6782fed88];long DATARMNETc252a1f55d;long 
DATARMNETa2e32cdd3a;u32 DATARMNET9c869c1ec2;u16 DATARMNET64bb8a8f57;u8 
DATARMNETd9cfd2812b;u8 DATARMNETf5ab31b9b0;u8 DATARMNET34097703c8;u8 
DATARMNETfc89d842ae;u8 DATARMNET6fe0db3a49;u8 DATARMNETba3f7a11ef;u8 map_mask;u8
 map_len;u8 DATARMNET5c24e1df05;};struct DATARMNETa034b2e60c{struct sk_buff*head
;struct sk_buff*tail;u64 DATARMNETbaa5765693;u32 DATARMNET6215127f48;u32 
DATARMNET35234676d4;};struct DATARMNET63d7680df2{union{struct iphdr 
DATARMNETac9bbaad7c;struct ipv6hdr DATARMNET1688a97aa4;}ip_hdr;union{struct 
tcphdr tp;struct udphdr up;}DATARMNETe33b41dad9;struct list_head 
DATARMNET04c88b8191;struct net_device*dev;struct DATARMNET6c78e47d24*
DATARMNET341ea38662;struct DATARMNETa034b2e60c DATARMNETae4b27456e;struct 
hlist_node list;u64 DATARMNET11930c5df8;u64 DATARMNETa8940e4a7b;u64 
DATARMNET2594c418db;u32 queue_head;u32 hash;u16 map_index;u16 map_cpu;u16 
DATARMNETfbbec4c537;u16 DATARMNETa59ce1fd2d;u8 DATARMNET85c698ec34;u16 
DATARMNET1e9d25d9ff;u8 DATARMNETa1099c74fe;u8 DATARMNET6250e93187;u8 mux_id;};
enum DATARMNET156842d55e{DATARMNET7bc926fdbe,DATARMNETb3e3b2a799,
DATARMNET8dcf06727b};enum DATARMNET8463cba7c7{DATARMNETc3bce05be2,
DATARMNET14067f0be4,DATARMNET28bb261646,DATARMNET67b67dc88f,DATARMNET0efbbe2821,
DATARMNETa4267dfd8a,DATARMNETf13db5ace8,DATARMNETb6eae1e097,DATARMNET7f401828b3,
DATARMNETeccb61ebc3};enum DATARMNETf355367410{DATARMNET557ff68d74,
DATARMNET1c55e5fdb1,DATARMNET4ab5a31d0c,DATARMNETde2dd86539};enum 
DATARMNET3f3bc61c03{DATARMNETf5157a9b85,DATARMNET709b59b0e6,DATARMNET99db6e7d86,
DATARMNETe3c02ddaeb,DATARMNET394acaf558,DATARMNETef8cbfa62f,DATARMNETe6e77f9f03,
DATARMNETecdf13872c,DATARMNETd1687e0776,DATARMNET1828d69e96,DATARMNET40ceff078e,
DATARMNET42b73d0f3f,DATARMNETb8fe2c0e64,DATARMNET72db8b9bac,DATARMNET33a9d4759f,
DATARMNET46966e7828,DATARMNETa1f9420686,DATARMNET54b67b8a75,DATARMNETac729c3d29,
DATARMNET6533f70c87,DATARMNET6f6efeaf61,DATARMNETcc0ef52ccb,DATARMNETf8de7cb644,
DATARMNETdd6bf3de6b,DATARMNETfeaf903a28,DATARMNET767c76ca08,DATARMNET048727d1d9,
DATARMNET6ea8a58f4e,DATARMNETf3110711cb};enum DATARMNETd751e3ec84{
DATARMNETcc3c294f38,DATARMNET802083239a,DATARMNETed69052342,DATARMNETcfb1764a91,
DATARMNET84a9e136b8,DATARMNET01bf75e27c,DATARMNETd45c383019,DATARMNETbb5757569c,
DATARMNETc8058e2cff,DATARMNET04dac3a62b,DATARMNET3cef75f6cd};struct 
DATARMNETfd554c7eac{struct sk_buff*skb;struct DATARMNETfd554c7eac*next;};struct 
DATARMNET37ef896af8{struct work_struct DATARMNET33110a3ff5;struct rmnet_port*
port;};struct DATARMNETe600c5b727{struct list_head DATARMNET3dc4262f53;u32 
DATARMNETae196235f2;u32 qtail;u32 DATARMNET96571b28de;u32 DATARMNET4133fc9428;
u32 seg;u8 DATARMNETef866573e0;u8 DATARMNET1e1f197118;};enum DATARMNETf0a06dc55a
{DATARMNET1790979ccf,DATARMNETd5eb6398da,DATARMNETcd24fca747,DATARMNETe50d824af7
,DATARMNET6b317c4c73,DATARMNET75d955c408,DATARMNETf3aaad06eb,DATARMNET720469c0a9
,DATARMNET4510abc30d,DATARMNET23f8730007,};enum DATARMNETc1d9e38720{
DATARMNET0b15fd8b54,DATARMNET5b5927fd7e,DATARMNETba3049005f};enum 
DATARMNET4f392b0182{DATARMNET72cb00fdc0,DATARMNET443dab7031,DATARMNET96db46917c,
DATARMNET89958f9b63,DATARMNET6d7a3a033a,DATARMNET16a68afc17,DATARMNET916f444e0a,
DATARMNETe9a79499ac,DATARMNET89f4779456,DATARMNETa94c7e31a0,DATARMNET116c96c236,
DATARMNET9da2ea4f74,DATARMNETe55953a107,DATARMNET43225b7a7c,DATARMNET4dbb6812b5,
DATARMNETbf80eada88,DATARMNET26438cb654,DATARMNETa6d85c8497,DATARMNET650a0ef6e1,
DATARMNET3e031f1532,DATARMNET9f467b9ce4,DATARMNETc154fd2d48,DATARMNET5874e1ecd7,
DATARMNET4f09dc5794,DATARMNET11a1fd3964,DATARMNETf2fc7954d4,DATARMNET4e91ddb48a,
DATARMNET16befe9635,DATARMNET856c53293b,DATARMNET7e63a08ad4,DATARMNETf7c8c7aa3f,
DATARMNET08b6defcff,DATARMNETf5c836f9ae,DATARMNETdd870ee64c,DATARMNETf730f80f06,
DATARMNET998c6de143,DATARMNETe7afce2292,DATARMNETe0fee0991a,DATARMNETbc2a6aea12,
DATARMNETde91850c28,DATARMNET237e7bd5f6,DATARMNETf16e78412b,DATARMNET83147a2e7d,
DATARMNET816bb1e327,DATARMNETf311f20c00,DATARMNETa2bd301af7,DATARMNET99640d60f7,
DATARMNET562b7d32a8,DATARMNET0808844559,DATARMNET5410705c1c,DATARMNET022082b219,
DATARMNETe4ee0d2636,DATARMNET23b8465daf,DATARMNET052f49b190,DATARMNETfb753e521e,
DATARMNET64b02f64c6,DATARMNET576793621a,DATARMNETc262b24b02,DATARMNET4ebbc01257,
DATARMNET595eed6ea2,DATARMNETde090e8314,DATARMNETa593d87b38,DATARMNET8a2898988b,
DATARMNET0709c9f764,};extern struct DATARMNET37ef896af8 DATARMNET1731db288b;
extern spinlock_t DATARMNET3764d083f0;extern spinlock_t DATARMNETec2a4f5211;
extern spinlock_t DATARMNETfbdbab2ef6;extern struct hlist_head 
DATARMNETe603c3a4b3[(0xd26+209-0xdf6)<<(DATARMNET25437d35fd)];extern int(*
rmnet_shs_skb_entry)(struct sk_buff*skb,struct rmnet_shs_clnt_s*
DATARMNET9e820fbfe3);extern int(*rmnet_shs_switch)(struct sk_buff*skb,struct 
rmnet_shs_clnt_s*DATARMNET9e820fbfe3);int DATARMNET362b15f941(u16 cpu);void 
DATARMNETeacad8334e(void);void DATARMNETe1f95274f1(void);unsigned int 
DATARMNET02cdd9b125(void);int DATARMNET310c3eb16e(u8 mask);int 
DATARMNETe02152c351(struct DATARMNET63d7680df2*DATARMNET63b1a086d5,u8 
DATARMNETd87669e323,u8 DATARMNET5447204733);void DATARMNET78bb6be330(struct 
rmnet_map_dl_ind_hdr*dlhdr,struct rmnet_map_control_command_header*qcmd);void 
DATARMNETf61cd23b90(struct rmnet_map_dl_ind_trl*dltrl,struct 
rmnet_map_control_command_header*qcmd);void DATARMNET7ed4cef8a3(struct 
rmnet_map_dl_ind_hdr*dlhdr);void DATARMNET613a81eca8(struct rmnet_map_dl_ind_trl
*dltrl);int DATARMNET756778f14f(struct sk_buff*skb,struct rmnet_shs_clnt_s*
DATARMNET9e820fbfe3);void DATARMNETa4bf9fbf64(u8 DATARMNET665469cfb6,u8 
DATARMNET5447204733);void DATARMNETde8ee16f92(struct DATARMNET63d7680df2*
DATARMNET63b1a086d5);void DATARMNET45d8cdb224(struct net_device*dev,struct 
net_device*vnd);void DATARMNET9297340f58(unsigned int DATARMNET9f4bc49c6f);void 
DATARMNET7f1d9480cb(void*port);void DATARMNETa4bd2ef52c(void*port);void 
DATARMNETe074a09496(void);void DATARMNET23c7ddd780(struct DATARMNET63d7680df2*
DATARMNET63b1a086d5,u8 DATARMNET5447204733);void DATARMNET349c3a0cab(u16 map_cpu
,bool DATARMNETb639f6e1b1);u32 DATARMNETadb0248bd4(u8 DATARMNET42a992465f);
#endif 

