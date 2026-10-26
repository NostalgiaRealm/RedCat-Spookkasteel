/*
 * FUN_005b04b0 at 005b04b0
 * undefined FUN_005b04b0(void)
 * Address ranges: 005b04b0-005b08f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b04b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  float in_stack_00000030;
  int in_stack_00000034;
  float local_118 [5];
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  undefined1 local_f0 [12];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [36];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  FUN_005b2fe0(&local_fc);
  local_118[4] = (float)local_fc;
  local_104 = local_f8;
  local_100 = local_f4;
  FUN_005b2f20();
  local_118[1] = 0.0;
  local_118[2] = -1.0;
  if (0.0 <= local_104) {
    local_118[2] = 1.0;
  }
  local_118[3] = 0.0;
  iVar2 = FUN_005b2ec0(0x3dcccccd);
  if (iVar2 != 0) {
    local_118[1] = 0.0;
    local_118[2] = 0.0;
    local_118[3] = -1.0;
    if (0.0 <= local_100) {
      local_118[3] = 1.0;
    }
  }
  FUN_005b2e60(local_cc);
  FUN_005b2f20();
  FUN_005b2e60(local_c0);
  FUN_005b2f20();
  FUN_005b3020(in_stack_00000030,&local_e4);
  fVar1 = in_stack_00000030 * -0.5;
  local_118[0] = fVar1;
  FUN_005b3020(fVar1,local_d8);
  FUN_005b3020(in_stack_00000030 * 0.5,local_d8);
  FUN_005b3020(fVar1,local_f0);
  FUN_005b3020(fVar1,local_f0);
  FUN_005b3000(local_b4);
  FUN_005b3000(local_9c);
  FUN_005b3000(local_a8);
  local_90 = local_e4;
  local_8c = local_e0;
  local_88 = local_dc;
  local_7c = param_4;
  local_78 = param_5;
  local_74 = param_6;
  local_70 = param_7;
  FUN_005b0900(local_6c,local_b4,&stack0x00000020);
  FUN_005b0900(local_48,local_9c,&stack0x00000020);
  FUN_005b0900(local_24,local_d8,&param_4);
  iVar2 = in_stack_00000034;
  if (in_stack_00000034 == 0) {
    FUN_005b6e90(param_1,&local_90);
  }
  else {
    local_118[0] = (float)FUN_005b6d60(param_1,&local_90,4,0,1,1,0x3f800000);
    FUN_0053cff0(*(undefined4 *)(iVar2 + 8),1,local_118);
  }
  FUN_005b0900(&local_90,local_f0,&param_4);
  FUN_005b0900(local_6c,local_a8,&stack0x00000020);
  FUN_005b0900(local_48,local_9c,&stack0x00000020);
  FUN_005b0900(local_24,local_d8,&param_4);
  if (iVar2 == 0) {
    FUN_005b6e90(param_1,&local_90);
  }
  else {
    local_118[0] = (float)FUN_005b6d60(param_1,&local_90,4,0,1,1,0x3f800000);
    FUN_0053cff0(*(undefined4 *)(iVar2 + 8),1,local_118);
  }
  FUN_005b0900(&local_90,&local_e4,&param_4);
  FUN_005b0900(local_6c,local_b4,&stack0x00000020);
  FUN_005b0900(local_48,local_a8,&stack0x00000020);
  FUN_005b0900(local_24,local_f0,&param_4);
  if (iVar2 == 0) {
    FUN_005b6e90(param_1,&local_90);
    return;
  }
  local_118[0] = (float)FUN_005b6d60(param_1,&local_90,4,0,1,1,0x3f800000);
  FUN_0053cff0(*(undefined4 *)(iVar2 + 8),1,local_118);
  return;
}

