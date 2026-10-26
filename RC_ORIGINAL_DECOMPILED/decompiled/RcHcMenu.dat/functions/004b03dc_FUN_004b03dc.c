/*
 * FUN_004b03dc at 004b03dc
 * undefined __register FUN_004b03dc(int * param_1)
 * Address ranges: 004b03dc-004b0510;004b0518-004b0532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b03dc(int *param_1)

{
  LPCSTR pCVar1;
  LPVOID lpData;
  undefined4 *in_FS_OFFSET;
  DWORD dwLen;
  undefined4 uStack_5c;
  DWORD *lpdwHandle;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  uint local_44;
  undefined1 local_40;
  uint local_3c;
  undefined1 local_38;
  uint local_34;
  undefined1 local_30;
  uint local_2c;
  undefined1 local_28;
  undefined *local_24;
  undefined *local_20;
  DWORD local_1c;
  BOOL local_18;
  LPVOID local_14;
  LPVOID local_10;
  DWORD local_c;
  int *local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_24 = (undefined *)0x0;
  local_20 = (undefined *)0x0;
  puStack_4c = &LAB_004b0533;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  lpdwHandle = &local_1c;
  local_8 = param_1;
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_20);
  pCVar1 = FUN_004041f4(local_20);
  uStack_5c = 0x4b041c;
  local_c = GetFileVersionInfoSizeA(pCVar1,lpdwHandle);
  if (local_c != 0) {
    lpData = (LPVOID)FUN_004027e8(local_c);
    uStack_5c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_5c;
    dwLen = local_c;
    local_10 = lpData;
    FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_24);
    pCVar1 = FUN_004041f4(local_24);
    local_18 = GetFileVersionInfoA(pCVar1,local_1c,dwLen,lpData);
    if (local_18 != 0) {
      local_18 = VerQueryValueA(local_10,"\\",&local_14,&local_1c);
      if (local_18 != 0) {
        local_44 = *(uint *)((int)local_14 + 0x10) >> 0x10;
        local_40 = 0;
        local_3c = *(uint *)((int)local_14 + 0x10) & 0xffff;
        local_38 = 0;
        local_34 = *(uint *)((int)local_14 + 0x14) >> 0x10;
        local_30 = 0;
        local_2c = *(uint *)((int)local_14 + 0x14) & 0xffff;
        local_28 = 0;
        FUN_0040a894((byte *)"Version %d/%d/%d/%d",&local_44,3,local_8);
      }
    }
    *in_FS_OFFSET = uStack_5c;
    FUN_00402800((int)local_10);
    return;
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004b053a;
  puStack_4c = (undefined1 *)0x4b0532;
  FUN_00403dd4((int *)&local_24,2);
  return;
}

