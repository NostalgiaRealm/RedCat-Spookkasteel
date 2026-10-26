/*
 * FUN_004564a0 at 004564a0
 * undefined __register FUN_004564a0(int param_1, int param_2, int param_3, int * param_4, int * param_5)
 * Address ranges: 004564a0-00456571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004564a0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x4b);
  if ((byte)(cVar1 - 3U) < 2) {
    *param_4 = param_2 - *(int *)(param_1 + 0x138);
  }
  else {
    *param_4 = param_3 - *(int *)(param_1 + 0x13c);
  }
  iVar2 = 0;
  if (cVar1 == '\x01') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x134) + 0x3c) + *param_4;
  }
  else if (cVar1 == '\x02') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x134) + 0x3c) - *param_4;
  }
  else if (cVar1 == '\x03') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x134) + 0x38) + *param_4;
  }
  else if (cVar1 == '\x04') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x134) + 0x38) - *param_4;
  }
  *param_5 = iVar2;
  if (iVar2 < *(int *)(param_1 + 0x148)) {
    *param_5 = *(int *)(param_1 + 0x148);
  }
  else if (*(int *)(param_1 + 0x14c) < iVar2) {
    *param_5 = *(int *)(param_1 + 0x14c);
  }
  if (iVar2 != *param_5) {
    if ((cVar1 == '\x02') || (cVar1 == '\x04')) {
      iVar2 = iVar2 - *param_5;
    }
    else {
      iVar2 = *param_5 - iVar2;
    }
    *param_4 = *param_4 + iVar2;
  }
  return;
}

