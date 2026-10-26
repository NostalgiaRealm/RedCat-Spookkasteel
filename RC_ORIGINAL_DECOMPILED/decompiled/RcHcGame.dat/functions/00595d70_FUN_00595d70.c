/*
 * FUN_00595d70 at 00595d70
 * undefined FUN_00595d70(void)
 * Address ranges: 00595d70-00595ebe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00595d70(int *param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  float local_90 [3];
  undefined4 local_84;
  undefined4 local_80;
  int local_7c [9];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_48 [12];
  undefined1 local_3c [60];
  
  local_90[0] = *param_2;
  local_90[2] = param_2[2];
  local_90[1] = 0.0;
  if ((local_90[0] == 0.0) && (local_90[2] == 0.0)) {
    local_90[0] = 1.0;
  }
  FUN_005b2f20();
  local_84 = 0;
  local_80 = 0x3f800000;
  local_7c[0] = 0;
  FUN_005b2e60(local_48);
  FUN_005b38e0(&local_84,local_90);
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x48))(local_3c);
  uStack_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  FUN_005b30f0(0xbfc90fdb);
  FUN_005b32c0(local_7c);
  FUN_005b3170(0x40490fdb);
  FUN_005b32c0(local_7c);
  piVar5 = param_1 + 0x5a;
  piVar3 = local_7c;
  piVar4 = piVar5;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_0049d5e0(1);
  *(undefined1 *)(param_1 + 0x66) = 1;
  FUN_004247e0(piVar5);
  FUN_005b50a0(piVar5);
  FUN_004337a0(0);
  return;
}

