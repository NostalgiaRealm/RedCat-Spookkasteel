/*
 * FUN_0049ced0 at 0049ced0
 * undefined FUN_0049ced0(void)
 * Address ranges: 0049ced0-0049d01a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049ced0(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_3c = *param_2;
  local_38 = param_2[1];
  local_34 = param_2[2];
  FUN_005b3080();
  FUN_005b2f20();
  if ((local_3c == 0.0) && (local_34 == 0.0)) {
    local_30[0] = -local_38;
    local_30[1] = 0.0;
  }
  else {
    local_30[0] = 0.0;
    local_30[1] = 1.0;
  }
  local_30[2] = 0.0;
  FUN_005b2e60(local_24);
  FUN_005b2f20();
  FUN_005b2e60(local_30);
  FUN_005b2f20();
  FUN_005b3080();
  iVar2 = param_1 + 0x168;
  uVar1 = *(undefined4 *)(param_1 + 0x18c);
  local_8 = *(undefined4 *)(param_1 + 400);
  local_4 = *(undefined4 *)(param_1 + 0x194);
  FUN_005b38e0(local_30,&local_3c);
  FUN_005b37a0();
  *(undefined4 *)(param_1 + 0x15c) = local_18;
  *(undefined4 *)(param_1 + 0x160) = local_14;
  *(undefined4 *)(param_1 + 0x164) = local_10;
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  *(undefined4 *)(param_1 + 400) = local_8;
  *(undefined4 *)(param_1 + 0x194) = local_4;
  *(undefined1 *)(param_1 + 0x198) = 1;
  FUN_004247e0(iVar2);
  FUN_005b50a0(iVar2);
  FUN_004337a0(0);
  return;
}

