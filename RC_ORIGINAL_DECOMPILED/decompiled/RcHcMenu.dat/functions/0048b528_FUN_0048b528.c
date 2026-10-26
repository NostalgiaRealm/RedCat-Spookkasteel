/*
 * FUN_0048b528 at 0048b528
 * int __register FUN_0048b528(undefined4 * param_1)
 * Address ranges: 0048b528-0048b587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0048b528(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00495828(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0048b238);
  *(undefined4 *)(iVar2 + 0x30) = param_1[0xc];
  *(undefined4 *)(iVar2 + 0x34) = param_1[0xd];
  *(undefined2 *)(iVar2 + 0x38) = *(undefined2 *)(param_1 + 0xe);
  *(undefined4 *)(iVar2 + 0x3a) = *(undefined4 *)((int)param_1 + 0x3a);
  *(undefined4 *)(iVar2 + 0x3e) = *(undefined4 *)((int)param_1 + 0x3e);
  *(undefined2 *)(iVar2 + 0x42) = *(undefined2 *)((int)param_1 + 0x42);
  return iVar2;
}

