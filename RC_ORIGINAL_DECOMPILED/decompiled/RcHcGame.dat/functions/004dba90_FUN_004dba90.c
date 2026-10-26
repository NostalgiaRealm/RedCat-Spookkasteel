/*
 * FUN_004dba90 at 004dba90
 * undefined FUN_004dba90(void)
 * Address ranges: 004dba90-004dbb05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004dba90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  FUN_0040cf10();
  uVar1 = FUN_00535c90();
  puVar2 = (undefined4 *)FUN_004dbe60(local_c,param_1);
  local_18 = *puVar2;
  local_14 = puVar2[1];
  local_10 = puVar2[2];
  FUN_004d6150(&local_18,*(undefined4 *)(param_1 + 0x10));
  FUN_00502350(1);
  FUN_004ddc00(s_player_00699d94);
  return uVar1;
}

