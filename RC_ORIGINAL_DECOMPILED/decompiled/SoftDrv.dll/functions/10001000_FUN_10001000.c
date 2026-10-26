/*
 * FUN_10001000 at 10001000
 * undefined FUN_10001000(void)
 * Address ranges: 10001000-10001041
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10001029) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_10001000(undefined4 param_1,uint param_2)

{
  int iVar1;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar2;
  
  DAT_10021030 = 0;
  _DAT_10021034 = 0;
  uVar2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  if ((uVar2 ^ 0x200000) != uVar2) {
    DAT_10021030 = 1;
    iVar1 = cpuid_Version_info(1);
    if ((*(uint *)(iVar1 + 8) & 0x10) != 0) {
      _DAT_10021034 = 1;
    }
  }
  return (ulonglong)param_2 << 0x20;
}

