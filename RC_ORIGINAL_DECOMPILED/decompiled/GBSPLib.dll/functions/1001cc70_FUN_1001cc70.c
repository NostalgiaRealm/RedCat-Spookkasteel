/*
 * FUN_1001cc70 at 1001cc70
 * undefined FUN_1001cc70(void)
 * Address ranges: 1001cc70-1001cd32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1001cc70(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_10014310(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10015fb0(0x38,&DAT_10265ce0,s___Actor_path_c_1003c778,0xaf,&DAT_10265ce0,0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[8] = 0;
  puVar1[0x10] = puVar1[0x10] & 2 | 1;
  if (param_3 == 1) {
    uVar2 = 3;
  }
  else {
    uVar2 = 1;
  }
  puVar1[0x10] = uVar2;
  if (param_2 == 0) {
    puVar1[1] = 3;
  }
  else if (param_2 == 2) {
    puVar1[1] = 4;
  }
  else if (param_2 == 3) {
    puVar1[1] = 5;
  }
  *puVar1 = 0;
  if (param_1 == 0) {
    puVar1[9] = 0;
  }
  else {
    if (param_1 == 1) {
      puVar1[9] = 1;
      puVar1[8] = 0;
      return puVar1;
    }
    if (param_1 == 7) {
      puVar1[9] = 2;
      puVar1[8] = 0;
      return puVar1;
    }
  }
  puVar1[8] = 0;
  return puVar1;
}

