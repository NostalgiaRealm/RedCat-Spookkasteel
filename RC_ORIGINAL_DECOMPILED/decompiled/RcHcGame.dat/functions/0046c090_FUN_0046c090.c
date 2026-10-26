/*
 * FUN_0046c090 at 0046c090
 * undefined FUN_0046c090(void)
 * Address ranges: 0046c090-0046c358
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046c090(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puStack_170;
  undefined4 *local_15c;
  int local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144 [9];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  int local_f4;
  undefined4 local_b8;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627e06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puStack_170 = param_1;
  FUN_004042e0(&puStack_170);
  FUN_00565c30();
  puVar3 = (undefined4 *)param_1[0x3e];
  local_b8 = 0x40000000;
  local_ff = 1;
  local_fe = 1;
  local_fd = 0;
  local_fc = 1;
  local_fb = 0;
  local_100 = 0;
  local_fa = 0;
  local_150 = *puVar3;
  puVar1 = param_1 + 0x26d;
  local_14c = puVar3[1];
  local_4 = 0;
  local_148 = puVar3[2];
  *puVar1 = *puVar3;
  param_1[0x26e] = puVar3[1];
  param_1[0x26f] = puVar3[2];
  param_1[0x26e] = (float)param_1[0x26e] + 10000.0;
  puStack_170 = puVar1;
  cVar2 = FUN_00565e10(&local_150);
  if (cVar2 == '\0') {
    param_1[0x26e] = *(float *)(param_1[0x3e] + 4) + 200.0;
  }
  else {
    *puVar1 = local_84;
    param_1[0x26e] = local_80;
    param_1[0x26f] = local_7c;
  }
  puVar3 = (undefined4 *)param_1[0x3e];
  puVar1 = param_1 + 0x267;
  local_15c = (undefined4 *)0x0;
  *puVar1 = *puVar3;
  param_1[0x268] = puVar3[1];
  param_1[0x269] = puVar3[2];
  param_1[0x268] = (float)param_1[0x268] - 0.5;
  param_1[0x26a] = *puVar1;
  param_1[0x26b] = param_1[0x268];
  param_1[0x26c] = param_1[0x269];
  param_1[0x26b] = (float)param_1[0x26b] - 23.0;
  puStack_170 = (undefined4 *)0x46c205;
  FUN_005b30c0();
  puVar3 = param_1 + 0x40;
  local_158 = 6;
  do {
    local_15c = (undefined4 *)((float)local_15c + 1.0471976);
    puStack_170 = (undefined4 *)0x46c22a;
    FUN_005b30c0();
    puStack_170 = local_15c;
    FUN_005b3130();
    puStack_170 = local_144;
    local_120 = 0x41300000;
    FUN_005b32c0();
    puStack_170 = (undefined4 *)param_1[0x26c];
    FUN_005b3280(param_1[0x26a],param_1[0x26b]);
    puVar3[-1] = local_120;
    *puVar3 = local_11c;
    puVar3[1] = local_118;
    puVar3 = puVar3 + 0x2c;
    local_158 = local_158 + -1;
  } while (local_158 != 0);
  param_1[0x147] = *puVar1;
  param_1[0x148] = param_1[0x268];
  param_1[0x149] = param_1[0x269];
  local_4 = 1;
  puStack_170 = local_48;
  FUN_005fe5f0();
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  local_40 = 0;
  FUN_005fe5f0(local_58);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  if (local_f4 != 0) {
    iVar4 = *(int *)(local_f4 + 0x14) + -1;
    *(int *)(local_f4 + 0x14) = iVar4;
    if (iVar4 == 0) {
      puStack_170 = (undefined4 *)0x0;
      FUN_005abfc0();
    }
    local_f4 = 0;
  }
  local_4 = 0xffffffff;
  puStack_170 = (undefined4 *)0x46c340;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

