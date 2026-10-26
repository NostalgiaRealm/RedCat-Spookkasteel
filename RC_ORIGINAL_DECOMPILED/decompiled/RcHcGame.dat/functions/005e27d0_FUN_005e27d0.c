/*
 * FUN_005e27d0 at 005e27d0
 * undefined FUN_005e27d0(void)
 * Address ranges: 005e27d0-005e2804
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e27d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064643b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f00c;
  iVar1 = *(int *)(param_2 + 8);
  param_1[2] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x005e27fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005e29a4)[iVar1])();
  return;
}

