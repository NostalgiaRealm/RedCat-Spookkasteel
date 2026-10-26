/*
 * FUN_00431000 at 00431000
 * undefined FUN_00431000(void)
 * Address ranges: 00431000-0043104b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_00431000(void)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_1;
  
  iVar1 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar1 = FUN_004bc480();
  }
  if (*(float *)(iVar1 + 0x478) == 0.0) {
    fVar2 = (float10)FUN_005ad390(iVar1 + 0x42c,&local_1);
    *(float *)(iVar1 + 0x478) = (float)fVar2;
    return fVar2;
  }
  return (float10)*(float *)(iVar1 + 0x478);
}

