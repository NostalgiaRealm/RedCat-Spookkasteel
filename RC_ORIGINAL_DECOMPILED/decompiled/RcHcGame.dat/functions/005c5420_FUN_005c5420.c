/*
 * FUN_005c5420 at 005c5420
 * undefined FUN_005c5420(void)
 * Address ranges: 005c5420-005c54e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005c5420(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x38,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0xb3,
                 &DAT_006b3f70,0);
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

