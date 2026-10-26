/*
 * FUN_00487850 at 00487850
 * bool __register FUN_00487850(int param_1, uint param_2, char param_3)
 * Address ranges: 00487850-00487945
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00487850(int param_1,uint param_2,char param_3)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar5 = param_2 < 0xf;
  iVar1 = (int)param_2 >> 3;
  if (param_2 < 0x10) {
    bVar5 = (*(byte *)(param_1 + 0x229 + iVar1) >> (param_2 & 7) & 1) != 0;
  }
  if (param_3 == '\0') {
    if (bVar5 != false) {
      if (param_2 < 0x10) {
        pbVar2 = (byte *)(param_1 + 0x229 + iVar1);
        *pbVar2 = *pbVar2 & ~('\x01' << (param_2 & 7));
      }
      if (*(short *)(param_1 + 0x229) == 0) {
        uVar4 = FUN_00487748(param_1);
        FUN_004844d4(param_1,uVar4);
        (**(code **)(**(int **)(param_1 + 0x22c) + 0x4c))(*(int **)(param_1 + 0x22c),param_1);
        FUN_00480798((*(int **)(param_1 + 0x22c))[0x1e],*(int **)(param_1 + 0x22c));
        *(undefined4 *)(param_1 + 0x22c) = 0;
      }
    }
  }
  else if (bVar5 == false) {
    if (*(short *)(param_1 + 0x229) == 0) {
      FUN_00487674(param_1);
      piVar3 = (int *)FUN_00487788(param_1);
      *(int **)(param_1 + 0x22c) = piVar3;
      (**(code **)(*piVar3 + 0x44))(piVar3,param_1,*piVar3,0,0);
      FUN_004844d4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x74));
      if ((*(char *)(*(int *)(param_1 + 0x22c) + 0x62) != '\0') &&
         ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
        FUN_004819d8(*(int *)(*(int *)(param_1 + 0x22c) + 0x78),'\x01');
      }
    }
    if (param_2 < 0x10) {
      pbVar2 = (byte *)(param_1 + 0x229 + iVar1);
      *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
    }
  }
  return bVar5;
}

