/*
 * FUN_0055825c at 0055825c
 * undefined __register FUN_0055825c(int * param_1, undefined4 param_2)
 * Address ranges: 0055825c-00558314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055825c(int *param_1,undefined4 param_2)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  LONG LVar3;
  LONG LVar4;
  RECT local_2c;
  undefined4 local_1c;
  LONG local_18;
  LONG local_14;
  tagPOINT local_10;
  int *local_8;
  
  local_1c = param_2;
  local_8 = param_1;
  GetCursorPos(&local_10);
  FUN_004322b8((int *)local_8[0x62],&local_10.x,&local_18);
  LVar3 = local_18;
  LVar4 = local_14;
  (**(code **)(*(int *)local_8[0x62] + 0x40))((int *)local_8[0x62],&local_2c);
  pt.y = LVar4;
  pt.x = LVar3;
  BVar1 = PtInRect(&local_2c,pt);
  if ((BVar1 != 0) &&
     (iVar2 = (**(code **)(*(int *)local_8[0x62] + 0x94))((int *)local_8[0x62],local_18,local_14),
     iVar2 == 1)) {
    FUN_0049cb24(local_8[0x65],'\0',extraout_ECX);
    FUN_0049cb24(local_8[0x66],'\0',extraout_ECX_00);
    return;
  }
  FUN_004322b8(local_8,&local_10.x,&local_18);
  FUN_00403270(local_8,0,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),8));
  return;
}

