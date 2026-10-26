/*
 * FUN_10010320 at 10010320
 * undefined FUN_10010320(void)
 * Address ranges: 10010320-10010396
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10010320(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  ushort *puVar5;
  float local_c [3];
  
  iVar4 = 3;
  pfVar2 = (float *)(param_1 + 0x48);
  pfVar3 = local_c;
  do {
    fVar1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    iVar4 = iVar4 + -1;
    *pfVar3 = fVar1 * 1.5258789e-05;
    pfVar3 = pfVar3 + 1;
  } while (iVar4 != 0);
  puVar5 = *(ushort **)(param_1 + 0x34);
  iVar4 = 0;
  if (*(short *)(param_1 + 0x30) != 0) {
    do {
      FUN_100145a0((float)puVar5[1],*(int *)(DAT_10313038 + (uint)*puVar5 * 4) + 0x54);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x30));
  }
  return;
}

