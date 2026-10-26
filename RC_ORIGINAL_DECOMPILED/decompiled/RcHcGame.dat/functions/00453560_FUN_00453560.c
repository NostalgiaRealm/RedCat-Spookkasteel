/*
 * FUN_00453560 at 00453560
 * undefined FUN_00453560(void)
 * Address ranges: 00453560-004535e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00453560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(int **)(param_1 + 0xa0) != (int *)0x0) && (*(int *)(param_1 + 0xa4) != 0)) &&
     (*(int **)(param_1 + 0xb0) != (int *)0x0)) {
    iVar1 = **(int **)(param_1 + 0xa0);
    uVar2 = (**(code **)(**(int **)(param_1 + 0xb0) + 0xb4))();
    (**(code **)(iVar1 + 4))(uVar2);
    (**(code **)(**(int **)(param_1 + 0xa0) + 0x10))();
    iVar1 = **(int **)(param_1 + 0xa4);
    iVar3 = FUN_00422d90();
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x2c));
    (**(code **)(**(int **)(param_1 + 0xa4) + 4))(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x178))
    ;
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x10))();
  }
  return;
}

