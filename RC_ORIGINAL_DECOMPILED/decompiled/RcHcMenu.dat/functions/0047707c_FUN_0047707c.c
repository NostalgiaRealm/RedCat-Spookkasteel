/*
 * FUN_0047707c at 0047707c
 * undefined __register FUN_0047707c(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0047707c-004770d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047707c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pbVar4 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 4;
  }
  piVar3 = (int *)(param_4 + -4);
  do {
    while (((byte)PTR_DAT_005725fc[(int)(uint)*(byte *)*piVar3 >> 3] >> (*(byte *)*piVar3 & 7) & 1)
           != 0) {
      *piVar3 = *piVar3 + 2;
    }
    if ((local_24[(int)(uint)*(byte *)*piVar3 >> 3] >> (*(byte *)*piVar3 & 7) & 1) == 0) {
      uVar1 = FUN_00477060(*(char *)*piVar3);
      if ((char)uVar1 == '\0') {
        return;
      }
    }
    *piVar3 = *piVar3 + 1;
  } while( true );
}

