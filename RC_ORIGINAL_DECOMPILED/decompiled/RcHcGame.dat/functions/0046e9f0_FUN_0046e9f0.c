/*
 * FUN_0046e9f0 at 0046e9f0
 * undefined FUN_0046e9f0(void)
 * Address ranges: 0046e9f0-0046ea77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0046e9f0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x7c) == '\0')) {
    *(int *)(param_1 + 0x13f8) = param_2;
    puVar1 = (undefined4 *)FUN_0049bc80(local_c);
    *(undefined4 *)(param_1 + 0x13fc) = *puVar1;
    *(undefined4 *)(param_1 + 0x1400) = puVar1[1];
    *(undefined4 *)(param_1 + 0x1404) = puVar1[2];
    FUN_00502350(1);
    FUN_0046e8b0();
    FUN_0046efa0(*(undefined4 *)(param_1 + 0x13fc),*(undefined4 *)(param_1 + 0x1400),
                 *(undefined4 *)(param_1 + 0x1404),0x3fc00000,param_3);
    return 1;
  }
  return 0;
}

