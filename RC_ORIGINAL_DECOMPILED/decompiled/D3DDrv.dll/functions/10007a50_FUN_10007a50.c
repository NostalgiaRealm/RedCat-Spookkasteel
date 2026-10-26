/*
 * FUN_10007a50 at 10007a50
 * undefined4 __stdcall FUN_10007a50(void)
 * Address ranges: 10007a50-10007bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007a50(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_101271e0 == 0) {
    return 1;
  }
  FUN_100020f0(s_THandle_CheckCache__Resetting_te_100157cc);
  if (DAT_10030a30 == 0x121a) {
    FUN_100020f0(s_3dfx_card_detected__using_smalle_10015790);
    local_24 = 0x18;
    local_20 = 0x18;
    local_1c = 0x18;
    local_18 = 0x18;
    local_14 = 0x18;
    local_10 = 0x80;
    local_3c = 0x100;
    local_38 = 0x100;
    local_34 = 0x80;
    local_30 = 0x80;
    local_2c = 0x80;
    local_28 = 0x80;
  }
  else {
    FUN_100020f0(s_NO_3dfx_card_detected__using_lar_10015750);
    local_24 = 0x20;
    local_20 = 0x20;
    local_1c = 0x20;
    local_18 = 0x20;
    local_14 = 0x20;
    local_10 = 0x20;
    local_3c = 0x400;
    local_38 = 0x400;
    local_34 = 0x200;
    local_30 = 0x100;
    local_2c = 0x100;
    local_28 = 0x100;
  }
  local_4 = 0x80;
  local_8 = 0x80;
  local_c = 0x80;
  local_40 = 0x100;
  local_44 = 0x80;
  local_48 = 0x80;
  iVar1 = FUN_10004c80(DAT_101c36f4,(int)&local_48,1);
  if (iVar1 == 0) {
    FUN_100020f0(s_THandle_CheckCache__D3DCache_Adj_1001570c);
    return 0;
  }
  iVar1 = FUN_10004c80(DAT_101c3670,(int)&local_24,0);
  if (iVar1 == 0) {
    FUN_100020f0(s_THandle_CheckCache__D3DCache_Adj_100156c8);
    return 0;
  }
  pbVar2 = &DAT_10127278;
  iVar1 = 20000;
  do {
    iVar3 = 0;
    if (*pbVar2 != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(pbVar2 + 4) + 8 + iVar4) = 0;
        iVar4 = iVar4 + 0x14;
      } while (iVar3 < (int)(uint)*pbVar2);
    }
    pbVar2 = pbVar2 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_101271e0 = 0;
  return 1;
}

