/*
 * FUN_00487314 at 00487314
 * undefined __register FUN_00487314(int param_1)
 * Address ranges: 00487314-004873fb;00487414-00487431
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00487314(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 *puStackY_13c;
  undefined1 *puStackY_138;
  _union_2683 *p_Var5;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  LONG local_124;
  int local_120;
  undefined4 local_11c [64];
  _union_2683 local_1c;
  ushort local_a;
  int local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_1c._0_4_ = 0;
  local_1c.decVal.Hi32 = 0;
  local_1c._8_4_ = 0;
  local_1c._12_4_ = 0;
  puStack_12c = &LAB_00487432;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)(*(int *)(param_1 + 0x78) + 0x34) == '\x1c') {
    puStackY_138 = (undefined1 *)0x100;
    puStackY_13c = local_11c;
    uVar2 = thunk_FUN_00479000(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar2);
    iVar3 = (**(code **)(**(int **)(local_8 + 0x78) + 0x68))();
    puVar1 = puStack_128;
    if ((int)(uint)local_a <= iVar3) {
      p_Var5 = &local_1c;
      local_124 = 0;
      puStackY_138 = (undefined1 *)0x4873a3;
      local_120 = (**(code **)(**(int **)(local_8 + 0x78) + 0x68))();
      local_120 = local_120 + -1;
      puStackY_138 = (undefined1 *)0x4873bf;
      FUN_00405cac(&local_124,1,0x11,(VARIANTARG *)&p_Var5->n2);
      puVar4 = FUN_00405db4((int)&local_1c,extraout_EDX,extraout_ECX);
      puStackY_138 = &LAB_004873fc;
      puStackY_13c = (undefined4 *)*in_FS_OFFSET;
      *in_FS_OFFSET = &puStackY_13c;
      FUN_00402944(local_11c,puVar4,(uint)local_a);
      *in_FS_OFFSET = puStackY_13c;
      puStackY_138 = (undefined1 *)0x4873fb;
      FUN_00405dd8((int)&local_1c);
      return;
    }
  }
  puStack_128 = puVar1;
  FUN_00473cec(local_8);
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_00487439;
  puStack_12c = (undefined1 *)0x487431;
  FUN_00405bcc((VARIANTARG *)&local_1c.n2);
  return;
}

