/*
 * FUN_005b4570 at 005b4570
 * undefined FUN_005b4570(void)
 * Address ranges: 005b4570-005b46ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b4570(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = FUN_005b4730(&local_24,local_30,local_c,local_18);
  if (iVar2 == 0) {
    return 0;
  }
  local_38 = local_20;
  local_34 = local_1c;
  *param_1 = local_24;
  local_3c = local_24;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  puVar1 = param_1 + 3;
  *puVar1 = local_24;
  param_1[4] = local_20;
  param_1[5] = local_1c;
  FUN_005b3000(&local_3c);
  FUN_005b46b0(puVar1);
  FUN_005b3000(&local_3c);
  FUN_005b46b0(puVar1);
  FUN_005b2fe0(&local_3c);
  FUN_005b46b0(puVar1);
  FUN_005b3000(&local_3c);
  FUN_005b46b0(puVar1);
  FUN_005b3000(&local_3c);
  FUN_005b46b0(puVar1);
  FUN_005b2fe0(&local_3c);
  FUN_005b46b0(puVar1);
  FUN_005b2fe0(&local_3c);
  FUN_005b46b0(puVar1);
  return 1;
}

