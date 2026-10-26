/*
 * FUN_0046fa9c at 0046fa9c
 * undefined __register FUN_0046fa9c(int param_1)
 * Address ranges: 0046fa9c-0046fada;0046fb2b-0046fc39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046fa9c(int param_1)

{
  byte bVar1;
  bool bVar2;
  LONG extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  byte *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  byte *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = (byte *)0x0;
  puStack_2c = &LAB_0046fc3a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  piVar3 = (int *)0x46fac2;
  bVar1 = FUN_0046f9c0(param_1);
  switch(bVar1 & 0x7f) {
  case 0:
    piVar3 = FUN_0047052c(param_1);
    FUN_00406a48((undefined4 *)PTR_PTR_00572510,(int *)&local_8);
    local_10 = *(undefined4 *)(param_1 + 0x2c);
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_00466e30(local_8,&local_10,0,(int)piVar3);
    break;
  case 1:
  case 0x10:
  case 0x17:
    FUN_00405c34((VARIANTARG *)(param_1 + 0x18),&local_14);
    piVar3 = (int *)0x46fb71;
    FUN_00404030(local_14);
    break;
  case 2:
    break;
  case 3:
  case 9:
  case 10:
  case 0xe:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
  case 7:
  case 0xb:
    break;
  case 8:
    break;
  case 0xc:
  case 0xd:
    piVar3 = (int *)0x46fbb4;
    bVar2 = FUN_00405df8(param_1 + 0x18);
    if (bVar2) {
      piVar3 = (int *)0x46fbc5;
      FUN_00405d8c(param_1 + 0x18,1,extraout_ECX);
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
    FUN_00405c34((VARIANTARG *)(param_1 + 0x18),&local_18);
    piVar3 = (int *)0x46fbe1;
    FUN_00404030(local_18);
    break;
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    break;
  default:
    piVar3 = FUN_0047052c(param_1);
    FUN_00406a48((undefined4 *)PTR_PTR_005720b8,(int *)&local_1c);
    local_10 = *(undefined4 *)(param_1 + 0x2c);
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_00466e30(local_1c,&local_10,0,(int)piVar3);
  }
  *in_FS_OFFSET = piVar3;
  puStack_2c = &LAB_0046fc41;
  uStack_30 = 0x46fc31;
  FUN_00403dd4((int *)&local_1c,3);
  uStack_30 = 0x46fc39;
  FUN_00403db0((int *)&local_8);
  return;
}

