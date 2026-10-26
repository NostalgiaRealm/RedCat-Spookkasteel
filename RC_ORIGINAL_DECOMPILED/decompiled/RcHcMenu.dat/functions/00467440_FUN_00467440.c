/*
 * FUN_00467440 at 00467440
 * undefined __register FUN_00467440(int param_1, undefined4 * param_2)
 * Address ranges: 00467440-0046750d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467440(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  int in_stack_fffffed0;
  int iStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte *local_118;
  byte local_114 [256];
  undefined4 *local_14;
  undefined1 local_10;
  byte *local_c;
  undefined1 local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_118 = (byte *)0x0;
  puStack_128 = &LAB_0046750e;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  puVar1 = &stack0xfffffffc;
  if (param_2 != (undefined4 *)0x0) {
    in_stack_fffffed0 = 0x467473;
    iVar2 = FUN_00409870((undefined *)param_2,*(undefined **)(param_1 + 0xc));
    puVar1 = puStack_124;
    if (iVar2 != 0) {
      in_stack_fffffed0 = 0x467485;
      uVar3 = FUN_0040320c(*(int **)(param_1 + 4),(int)&PTR_FUN_00461fa8);
      puVar1 = puStack_124;
      if ((char)uVar3 != '\0') {
        in_stack_fffffed0 = 0x467493;
        iVar2 = FUN_004676ec(*(int *)(param_1 + 4),(undefined *)param_2);
        puVar1 = puStack_124;
        if (-1 < iVar2) {
          in_stack_fffffed0 = 0;
          local_10 = 0xb;
          local_14 = param_2;
          FUN_00402fe0(**(int **)(param_1 + 4),local_114);
          local_c = local_114;
          local_8 = 4;
          FUN_00406a48((undefined4 *)PTR_PTR_005723a4,(int *)&local_118);
          FUN_00466e30(local_118,&local_14,1,in_stack_fffffed0);
          puVar1 = puStack_124;
        }
      }
    }
  }
  puStack_124 = puVar1;
  FUN_00403e04((int *)(param_1 + 0xc),param_2);
  FUN_00412dc4(param_1);
  *in_FS_OFFSET = in_stack_fffffed0;
  puStack_128 = &LAB_00467515;
  iStack_12c = 0x46750d;
  FUN_00403db0((int *)&local_118);
  return;
}

