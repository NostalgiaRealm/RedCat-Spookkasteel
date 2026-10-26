/*
 * FUN_004723bc at 004723bc
 * undefined __register FUN_004723bc(int param_1, undefined4 * param_2, ushort * param_3, int param_4)
 * Address ranges: 004723bc-0047243f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004723bc(int param_1,undefined4 *param_2,ushort *param_3,int param_4)

{
  LONG LVar1;
  undefined4 *puVar2;
  int iVar3;
  void *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4723d6;
  LVar1 = FUN_00405d8c(param_1,1,(LONG)param_3);
  *param_3 = (short)LVar1 + 1;
  puStack_14 = (undefined1 *)0x4723e2;
  puVar2 = FUN_00405db4(param_1,extraout_EDX,extraout_ECX);
  puStack_18 = &LAB_00472440;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00402944(puVar2,param_2,(uint)*param_3);
  iVar3 = (**(code **)(**(int **)(param_4 + -4) + 0x68))();
  if ((int)(uint)*param_3 < iVar3) {
    iVar3 = (**(code **)(**(int **)(param_4 + -4) + 0x68))();
    FUN_00402cfc((undefined4 *)((uint)*param_3 + (int)param_2),iVar3 - (uint)*param_3,0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00472447;
  puStack_18 = (undefined1 *)0x47243f;
  FUN_00405dd8(param_1);
  return;
}

