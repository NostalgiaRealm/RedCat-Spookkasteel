/*
 * FUN_00405a20 at 00405a20
 * undefined __register FUN_00405a20(short * param_1, _union_2683 * param_2)
 * Address ranges: 00405a20-00405aa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405a20(short *param_1,_union_2683 *param_2)

{
  ushort uVar1;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  byte bVar2;
  byte bVar3;
  byte in_AF;
  byte bVar4;
  byte bVar5;
  byte in_TF;
  byte in_IF;
  byte bVar6;
  byte bVar7;
  byte in_NT;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  _union_2683 local_24;
  undefined4 local_10;
  _union_2683 *local_c;
  short *local_8;
  
  bVar6 = 0;
  uStack_30 = &stack0xfffffffc;
  uStack_2c = (undefined2)unaff_ESI;
  uStack_2a = (undefined2)((uint)unaff_ESI >> 0x10);
  local_24._0_4_ = 0;
  local_24.decVal.Hi32 = 0;
  local_24._8_4_ = 0;
  local_24._12_4_ = 0;
  uStack_34 = 0x5aaa;
  uStack_32 = 0x40;
  uStack_38 = (undefined2)*in_FS_OFFSET;
  uStack_36 = (undefined2)((uint)*in_FS_OFFSET >> 0x10);
  *in_FS_OFFSET = &uStack_38;
  local_c = param_2;
  local_8 = param_1;
  if (*param_1 == 0x101) {
    uStack_30 = &stack0xfffffffc;
    (*DAT_005733ec)(param_1);
  }
  uVar1 = (param_2->n2).vt;
  bVar2 = uVar1 < 0x101;
  bVar7 = SBORROW2(uVar1,0x101);
  uVar1 = uVar1 - 0x101;
  bVar5 = (short)uVar1 < 0;
  bVar4 = uVar1 == 0;
  bVar3 = (POPCOUNT(uVar1 & 0xff) & 1U) == 0;
  if ((bool)bVar4) {
    FUN_00404e28((VARIANT *)&local_24.n2,(VARIANTARG *)&param_2->n2);
    (*DAT_005733ec)(&local_24);
    local_c = &local_24;
  }
  FUN_00405abc((VARIANTARG *)param_1,(VARIANTARG *)&local_c->n2);
  local_10 = CONCAT22(uStack_38,
                      (ushort)(in_NT & 1) * 0x4000 | (ushort)(bVar7 & 1) * 0x800 |
                      (ushort)(bVar6 & 1) * 0x400 | (ushort)(in_IF & 1) * 0x200 |
                      (ushort)(in_TF & 1) * 0x100 | (ushort)(bVar5 & 1) * 0x80 |
                      (ushort)(bVar4 & 1) * 0x40 | (ushort)(in_AF & 1) * 0x10 |
                      (ushort)(bVar3 & 1) * 4 | (ushort)(bVar2 & 1));
  *in_FS_OFFSET = CONCAT22(uStack_34,uStack_36);
  uStack_30._2_2_ = 0x5ab1;
  uStack_2c = 0x40;
  uStack_32 = 0x5aa9;
  uStack_30._0_2_ = 0x40;
  FUN_00405bcc((VARIANTARG *)&local_24.n2);
  return;
}

