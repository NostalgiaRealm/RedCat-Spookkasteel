/*
 * FUN_0048911c at 0048911c
 * undefined __register FUN_0048911c(int * param_1, char param_2)
 * Address ranges: 0048911c-004891be;004891d8-004891ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048911c(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 0x48912a;
  piVar1 = FUN_00403434(param_1,param_2);
  if ((char)piVar1[6] != '\0') {
    if (*(char *)((int)piVar1 + 0x19) != '\0') {
      uStack_1c = 0x48914f;
      FUN_0046d174(piVar1[1],'\x01');
    }
    uStack_1c = 0x48915a;
    uVar2 = FUN_0046cde0(piVar1[1]);
    if (((char)uVar2 == '\0') && ((char)piVar1[9] == '\0')) {
      uStack_1c = CONCAT22((short)((uint)piVar1 >> 0x10),(short)piVar1[5]);
      iStack_20 = piVar1[3];
      uStack_24 = *(undefined4 *)(piVar1[2] + 0x168);
      puStack_28 = (undefined1 *)0x489188;
      thunk_FUN_00479ab8(uStack_24);
    }
  }
  if (*(char *)((int)piVar1 + 0x19) != '\0') {
    puStack_2c = &LAB_004891bf;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*(int *)piVar1[2] + 0xac))((int *)piVar1[2],0,piVar1[1]);
    *in_FS_OFFSET = uStack_30;
  }
  if ('\0' < extraout_DL) {
    puStack_28 = (undefined1 *)0x4891e6;
    FUN_00403424(piVar1);
  }
  return;
}

