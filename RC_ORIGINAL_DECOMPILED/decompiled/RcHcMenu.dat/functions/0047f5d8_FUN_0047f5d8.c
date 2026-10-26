/*
 * FUN_0047f5d8 at 0047f5d8
 * undefined __register FUN_0047f5d8(int param_1, undefined4 param_2, int param_3)
 * Address ranges: 0047f5d8-0047f834
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047f5d8(int param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined1 local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  undefined2 *local_20;
  double *local_1c;
  double *local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_2c = (byte *)0x0;
  local_14 = 0;
  puStack_48 = &LAB_0047f87d;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x47f608;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  puStack_50 = (undefined1 *)FUN_0041300c(param_3);
  puStack_54 = (undefined1 *)0x47f61c;
  FUN_00406454(&local_14,(int)&DAT_0047d6a0,1);
  uVar8 = 2;
  puStack_50 = (undefined1 *)0x47f62b;
  iVar4 = FUN_0041300c(local_10);
  if (-1 < iVar4 + -1) {
    iVar9 = 0;
    do {
      puStack_50 = (undefined1 *)0x47f63f;
      iVar5 = FUN_0046f0d0(local_10,iVar9);
      puStack_50 = (undefined1 *)0x47f644;
      sVar3 = FUN_0047f360(iVar5);
      uVar8 = uVar8 + sVar3;
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puStack_50 = (undefined1 *)0x47f653;
  local_1c = (double *)FUN_0040960c((uint)uVar8);
  local_20 = (undefined2 *)((int)local_1c + (uVar8 - 2));
  *local_20 = 0xffff;
  puStack_54 = &LAB_0047f852;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_50 = &stack0xfffffffc;
  local_18 = local_1c;
  local_24 = FUN_0047f580(local_c);
  *in_FS_OFFSET = &stack0xffffff9c;
  iVar4 = FUN_0041300c(local_10);
  if (-1 < iVar4 + -1) {
    iVar9 = 0;
    do {
      psVar1 = (short *)(local_14 + iVar9 * 0x3e);
      local_28 = FUN_0046f0d0(local_10,iVar9);
      bVar2 = FUN_0046f9c0(local_28);
      psVar1[0x11] = (ushort)(byte)(&DAT_0057149c)[bVar2 & 0x7f];
      if ((psVar1[0x11] == 1) || (psVar1[0x11] == 3)) {
        bVar2 = FUN_0046f9c0(local_28);
        psVar1[0x12] = *(short *)(&DAT_005714c0 + (bVar2 & 0x7f) * 2);
      }
      else if (psVar1[0x11] == 0) {
        iVar5 = local_8;
        FUN_00406a48((undefined4 *)PTR_PTR_005725dc,(int *)&local_2c);
        local_34 = *(undefined4 *)(local_28 + 0x2c);
        local_30 = 0xb;
        FUN_00466e30(local_2c,&local_34,0,iVar5);
      }
      *psVar1 = (short)iVar9 + 1;
      iVar5 = FUN_0046f0d0(local_10,iVar9);
      sVar3 = FUN_0047f360(iVar5);
      psVar1[0x16] = sVar3;
      iVar5 = FUN_0046f0d0(local_10,iVar9);
      FUN_0047f400(iVar5,local_1c);
      psVar1[0x15] = (short)local_1c - (short)local_18;
      uVar6 = FUN_0046f970(local_28);
      if ((char)uVar6 == '\0') {
        sVar3 = psVar1[0x11];
        if (sVar3 == 1) {
          sVar3 = FUN_0046fa9c(local_28);
          psVar1[0x13] = sVar3 + -1;
        }
        else if (sVar3 == 9) {
          sVar3 = FUN_0046fa9c(local_28);
          psVar1[0x13] = sVar3;
        }
        else if (sVar3 == 0xf) {
          sVar3 = FUN_0046fa9c(local_28);
          psVar1[0x13] = sVar3 + -2;
        }
        else if (sVar3 == 3) {
          bVar2 = FUN_0046f9c0(local_28);
          psVar1[0x12] = *(short *)(&DAT_005714c0 + (bVar2 & 0x7f) * 2);
        }
      }
      else {
        psVar1[0x17] = (short)local_20 - (short)local_18;
      }
      local_1c = (double *)((int)local_1c + (uint)(ushort)psVar1[0x16]);
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004062a0(local_14);
  uVar6 = local_c;
  uVar7 = thunk_FUN_00479a59(local_c);
  FUN_0047fe48(uVar7);
  *in_FS_OFFSET = uVar6;
  FUN_0047f5c4(&local_24);
  return;
}

