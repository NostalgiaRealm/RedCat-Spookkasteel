/*
 * FUN_0040ab80 at 0040ab80
 * undefined __register FUN_0040ab80(undefined * param_1)
 * Address ranges: 0040ab80-0040abba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ab80(undefined *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  float10 local_18;
  undefined *local_c;
  undefined1 local_8;
  
  pbVar1 = FUN_004041f4(param_1);
  uVar2 = FUN_0040efdc(pbVar1,&local_18,'\0');
  if ((char)uVar2 == '\0') {
    local_8 = 0xb;
    local_c = param_1;
    FUN_004095ac((undefined4 *)PTR_PTR_00572110,&local_c,0);
  }
  return;
}

