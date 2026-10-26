/*
 * FUN_0049f478 at 0049f478
 * undefined __register FUN_0049f478(int * param_1, byte * param_2)
 * Address ranges: 0049f478-0049f590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f478(int *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  byte *pbVar7;
  uint local_14;
  byte *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  pbVar7 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd4;
  iVar2 = FUN_0041300c(local_8[1]);
  local_14 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_14 = thunk_FUN_00402874(local_14);
  }
  bVar1 = false;
  while ((-1 < (int)local_14 && (!bVar1))) {
    piVar5 = (int *)FUN_00413014(local_8[1],local_14);
    uVar3 = FUN_00403224(piVar5,(int)&PTR_FUN_0049eb7c);
    pbVar7 = local_c;
    uVar4 = FUN_0049f3c8(local_8,*(byte **)(*(int *)(uVar3 + 0xc) + 4),*(int *)(uVar3 + 0x10),
                         local_c);
    if ((char)uVar4 != '\0') {
      bVar1 = true;
      FUN_0049f64c(uVar3);
      uVar4 = *(uint *)(uVar3 + 0xc);
    }
    bVar6 = SBORROW4(local_14,1);
    local_14 = local_14 - 1;
    if (bVar6) {
      thunk_FUN_00402874(uVar4);
    }
  }
  if ((!bVar1) && (iVar2 = FUN_0049f20c(local_8,(undefined4 *)local_c), iVar2 != 0)) {
    piVar5 = FUN_00412c18((int *)&PTR_FUN_0049eb7c,'\x01',(int *)local_8[1]);
    FUN_0049f64c((uint)piVar5);
    piVar5[3] = iVar2;
    iVar2 = FUN_00409d68(*(undefined **)(iVar2 + 4));
    piVar5[4] = iVar2;
  }
  *in_FS_OFFSET = pbVar7;
  FUN_00403db0((int *)&local_c);
  return;
}

