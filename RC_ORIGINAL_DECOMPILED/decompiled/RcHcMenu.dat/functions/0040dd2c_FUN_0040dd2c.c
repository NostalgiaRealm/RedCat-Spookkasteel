/*
 * FUN_0040dd2c at 0040dd2c
 * undefined __register FUN_0040dd2c(void)
 * Address ranges: 0040dd2c-0040dff6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040dd2c(void)

{
  LCID LVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 extraout_ECX_09;
  byte *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  char *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  byte *pbVar5;
  byte *local_1c;
  byte *local_18;
  undefined4 *local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_14 = (undefined4 *)&stack0xfffffffc;
  iVar4 = 8;
  do {
    local_8 = (undefined4 *)0x0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = &LAB_0040dff7;
  local_1c = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  FUN_0040dc74();
  FUN_0040c79c();
  if (DAT_005735bc != '\0') {
    FUN_0040c974();
  }
  LVar1 = GetThreadLocale();
  local_24 = (undefined4 *)0x40dd7b;
  FUN_0040c6ec(LVar1,0x14,(undefined4 *)0x0,(int *)&local_14);
  FUN_00403e04(&DAT_005734f4,local_14);
  local_24 = (undefined4 *)0x40dd9d;
  FUN_0040c6ec(LVar1,0x1b,(undefined4 *)&DAT_0040e00c,(int *)&local_18);
  uVar2 = FUN_00409c80(local_18,0,extraout_ECX);
  DAT_005734f8 = (undefined1)uVar2;
  local_24 = (undefined4 *)0x40ddc1;
  FUN_0040c6ec(LVar1,0x1c,(undefined4 *)&DAT_0040e00c,(int *)&local_1c);
  uVar2 = FUN_00409c80(local_1c,0,extraout_ECX_00);
  DAT_005734f9 = (undefined1)uVar2;
  uVar3 = FUN_0040c738(LVar1,0xf,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),0x2c));
  DAT_005734fa = (undefined1)uVar3;
  uVar3 = FUN_0040c738(LVar1,0xe,CONCAT31((int3)((uint)extraout_ECX_02 >> 8),0x2e));
  DAT_005734fb = (undefined1)uVar3;
  pbVar5 = &stack0xffffffe0;
  local_24 = (undefined4 *)0x40de0b;
  FUN_0040c6ec(LVar1,0x19,(undefined4 *)&DAT_0040e00c,(int *)pbVar5);
  uVar2 = FUN_00409c80(pbVar5,0,extraout_ECX_03);
  DAT_005734fc = (undefined1)uVar2;
  uVar3 = FUN_0040c738(LVar1,0x1d,CONCAT31((int3)((uint)extraout_ECX_04 >> 8),0x2f));
  DAT_005734fd = (undefined1)uVar3;
  local_24 = (undefined4 *)0x40de42;
  FUN_0040c6ec(LVar1,0x1f,(undefined4 *)"m/d/yy",(int *)&local_28);
  FUN_0040ca24(local_28,(int *)&local_24);
  FUN_00403e04(&DAT_00573500,local_24);
  local_24 = (undefined4 *)0x40de6f;
  FUN_0040c6ec(LVar1,0x20,(undefined4 *)"mmmm d, yyyy",(int *)&local_30);
  FUN_0040ca24(local_30,(int *)&local_2c);
  FUN_00403e04(&DAT_00573504,local_2c);
  uVar3 = FUN_0040c738(LVar1,0x1e,CONCAT31((int3)((uint)extraout_ECX_05 >> 8),0x3a));
  DAT_00573508 = (undefined1)uVar3;
  local_24 = (undefined4 *)0x40deaf;
  FUN_0040c6ec(LVar1,0x28,(undefined4 *)&DAT_0040e040,(int *)&local_34);
  FUN_00403e04(&DAT_0057350c,local_34);
  local_24 = (undefined4 *)0x40ded1;
  FUN_0040c6ec(LVar1,0x29,(undefined4 *)&DAT_0040e04c,(int *)&local_38);
  FUN_00403e04(&DAT_00573510,(undefined4 *)local_38);
  FUN_00403db0((int *)&local_c);
  FUN_00403db0((int *)&stack0xfffffff0);
  local_24 = (undefined4 *)0x40df03;
  FUN_0040c6ec(LVar1,0x25,(undefined4 *)&DAT_0040e00c,(int *)&local_3c);
  iVar4 = FUN_00409c80(local_3c,0,extraout_ECX_06);
  if (iVar4 == 0) {
    FUN_00403e48((int *)&local_8,0x40e058);
  }
  else {
    FUN_00403e48((int *)&local_8,0x40e064);
  }
  local_24 = (undefined4 *)0x40df42;
  FUN_0040c6ec(LVar1,0x23,(undefined4 *)&DAT_0040e00c,(int *)&local_40);
  iVar4 = FUN_00409c80(local_40,0,extraout_ECX_07);
  if (iVar4 == 0) {
    local_24 = (undefined4 *)0x40df65;
    FUN_0040c6ec(LVar1,0x1005,(undefined4 *)&DAT_0040e00c,(int *)&local_44);
    iVar4 = FUN_00409c80(local_44,0,extraout_ECX_08);
    if (iVar4 == 0) {
      FUN_00403e48((int *)&stack0xfffffff0,0x40e070);
    }
    else {
      FUN_00403e48((int *)&local_c,0x40e080);
    }
  }
  local_24 = local_8;
  local_28 = (undefined4 *)&DAT_0040e090;
  local_30 = (undefined4 *)0x40dfac;
  FUN_004040f0(&DAT_00573514,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = ":mm:ss";
  local_40 = (byte *)0x40dfc9;
  local_3c = unaff_EBX;
  FUN_004040f0(&DAT_00573518,4);
  local_40 = (byte *)0x40dfd7;
  uVar3 = FUN_0040c738(LVar1,0xc,CONCAT31((int3)((uint)extraout_ECX_09 >> 8),0x2c));
  DAT_005735f8 = (undefined1)uVar3;
  *in_FS_OFFSET = local_3c;
  local_34 = (undefined4 *)&LAB_0040dffe;
  local_38 = (char *)0x40dff6;
  FUN_00403dd4((int *)&local_44,0x10);
  return;
}

