/*
 * FUN_0046fc4c at 0046fc4c
 * undefined __register FUN_0046fc4c(int param_1, double * param_2)
 * Address ranges: 0046fc4c-0046fc91;0046fcee-0046fe9e;0046fea6-0046ff2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046fc4c(int param_1,double *param_2)

{
  byte bVar1;
  bool bVar2;
  LONG LVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  LONG extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStackY_30;
  double dVar8;
  longlong lVar9;
  undefined *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  byte *local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 4;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_0046ff2c;
  local_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  pbVar6 = (byte *)0x46fc79;
  local_8 = param_1;
  bVar1 = FUN_0046f9c0(param_1);
  switch(bVar1 & 0x7f) {
  case 0:
    pbVar6 = (byte *)FUN_0047052c(local_8);
    FUN_00406a48((undefined4 *)PTR_PTR_00572510,(int *)&local_c);
    FUN_00466e30(local_c,&stack0xffffffec,0,(int)pbVar6);
    break;
  case 1:
  case 0x10:
  case 0x17:
    FUN_004708c0(local_8,(int *)&stack0xffffffe8);
    iVar7 = FUN_00404030(unaff_ESI);
    uVar4 = iVar7 + 1;
    FUN_004708c0(local_8,(int *)&local_1c);
    puVar5 = (undefined4 *)FUN_004041f4(local_1c);
    pbVar6 = (byte *)0x46fd57;
    FUN_0040a134((undefined4 *)param_2,puVar5,uVar4);
    break;
  case 2:
    pbVar6 = (byte *)0x46fd64;
    uVar4 = FUN_0047079c(local_8);
    *(short *)param_2 = (short)uVar4;
    break;
  case 3:
  case 0xe:
    pbVar6 = (byte *)0x46fd84;
    uVar4 = FUN_0047079c(local_8);
    *(uint *)param_2 = uVar4;
    break;
  case 4:
    pbVar6 = (byte *)0x46fd74;
    uVar4 = FUN_0047079c(local_8);
    *(short *)param_2 = (short)uVar4;
    break;
  case 5:
    pbVar6 = (byte *)0x46fe31;
    bVar2 = FUN_004705c0(local_8);
    *(ushort *)param_2 = (ushort)bVar2;
    break;
  case 6:
  case 7:
    pbVar6 = (byte *)0x46fe21;
    FUN_00470634(local_8);
    *param_2 = (double)in_ST0;
    break;
  case 8:
    FUN_00470714(local_8);
    lVar9 = (longlong)ROUND(in_ST0);
    uStackY_30 = 0x46fe14;
    FUN_00466ea0((byte *)param_2,0x20,4,lVar9);
    pbVar6 = (byte *)((ulonglong)lVar9 >> 0x20);
    break;
  case 9:
    FUN_00470a24(local_8);
    dVar8 = (double)in_ST0;
    uStackY_30 = 0x46fdc3;
    FUN_0040abf8((undefined4 *)&stack0xffffffec,extraout_EDX_00,extraout_ECX_00,dVar8);
    pbVar6 = (byte *)((ulonglong)dVar8 >> 0x20);
    *(undefined4 *)param_2 = 0;
    break;
  case 10:
    FUN_00470a24(local_8);
    dVar8 = (double)in_ST0;
    uStackY_30 = 0x46fda2;
    FUN_0040abf8((undefined4 *)&stack0xffffffec,extraout_EDX,extraout_ECX,dVar8);
    pbVar6 = (byte *)((ulonglong)dVar8 >> 0x20);
    *(undefined4 *)param_2 = unaff_EBX;
    break;
  case 0xb:
    FUN_00470a24(local_8);
    uStackY_30 = 0x46fde4;
    FUN_0040abf8((undefined4 *)&stack0xffffffec,extraout_EDX_01,extraout_ECX_01,(double)in_ST0);
    pbVar6 = (byte *)0x46fdec;
    FUN_0040ac84();
    *param_2 = (double)in_ST1;
    break;
  case 0xc:
  case 0xd:
    pbVar6 = (byte *)0x46fe47;
    bVar2 = FUN_00405df8(local_8 + 0x18);
    if (bVar2) {
      puVar5 = FUN_00405db4(local_8 + 0x18,extraout_EDX_02,extraout_ECX_02);
      uStackY_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_30;
      LVar3 = FUN_00405d8c(local_8 + 0x18,1,extraout_ECX_03);
      FUN_00402944(puVar5,(undefined4 *)param_2,LVar3 + 1);
      *in_FS_OFFSET = uStackY_30;
      FUN_00405dd8(local_8 + 0x18);
      return;
    }
    break;
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x1e:
  case 0x1f:
    FUN_004708c0(local_8,(int *)&local_20);
    uVar4 = FUN_00404030((int)local_20);
    FUN_004708c0(local_8,(int *)&local_24);
    puVar5 = (undefined4 *)FUN_004041f4(local_24);
    pbVar6 = (byte *)0x46fed5;
    FUN_00402944(puVar5,(undefined4 *)param_2,uVar4);
    break;
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    break;
  default:
    pbVar6 = (byte *)FUN_0047052c(local_8);
    FUN_00406a48((undefined4 *)PTR_PTR_005720b8,(int *)&stack0xffffffd8);
    FUN_00466e30(pbVar6,&stack0xffffffec,0,(int)pbVar6);
  }
  *in_FS_OFFSET = pbVar6;
  local_20 = &LAB_0046ff33;
  local_24 = (undefined *)0x46ff23;
  FUN_00403dd4((int *)&stack0xffffffd8,5);
  local_24 = (undefined *)0x46ff2b;
  FUN_00403db0((int *)&local_c);
  return;
}

