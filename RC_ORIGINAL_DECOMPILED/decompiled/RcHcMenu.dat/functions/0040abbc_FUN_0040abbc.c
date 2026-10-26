/*
 * FUN_0040abbc at 0040abbc
 * undefined __register FUN_0040abbc(undefined * param_1)
 * Address ranges: 0040abbc-0040abf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040abbc(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 local_14 [8];
  undefined *local_c;
  undefined1 local_8;
  
  pbVar1 = FUN_004041f4(param_1);
  uVar2 = FUN_0040efdc(pbVar1,(float10 *)local_14,'\x01');
  if ((char)uVar2 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_004095ac((undefined4 *)PTR_PTR_00572110,&local_c,0);
  }
  return;
}

