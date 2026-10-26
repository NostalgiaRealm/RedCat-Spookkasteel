/*
 * FUN_00591840 at 00591840
 * undefined FUN_00591840(void)
 * Address ranges: 00591840-005918c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00591840(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_10 [4];
  undefined1 local_c [12];
  
  (**(code **)(*param_1 + 0x48))(local_c);
  FUN_005918d0(param_2);
  FUN_0056eef0(unaff_retaddr,param_2);
  if (param_1[0x67] != 0) {
    *(int *)(param_1[0x67] + 0x60) = param_1[0x47];
    iVar1 = *(int *)param_1[0x67];
    uVar2 = (**(code **)(*param_1 + 0x48))(auStack_10);
    (**(code **)(iVar1 + 4))(unaff_retaddr,param_2,&stack0xffffffe0,uVar2);
  }
  return;
}

