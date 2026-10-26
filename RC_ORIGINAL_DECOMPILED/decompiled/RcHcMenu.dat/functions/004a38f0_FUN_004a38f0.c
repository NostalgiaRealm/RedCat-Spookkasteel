/*
 * FUN_004a38f0 at 004a38f0
 * undefined __register FUN_004a38f0(int * param_1, int param_2)
 * Address ranges: 004a38f0-004a3992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a38f0(int *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  
  if (((*(byte *)(param_2 + 0x10) & 1) == 0) || ((char)param_1[0x84] == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar1 = *(byte *)(param_2 + 0x10);
  cVar3 = (**(code **)(*param_1 + 0x4c))();
  if (cVar3 == '\0') {
    FUN_004a31c8((int)param_1,'\x04');
  }
  else if (bVar2) {
    FUN_004a31c8((int)param_1,'\x01');
  }
  else if ((char)param_1[0x84] == '\0') {
    if (((bVar1 & 0x10) == 0) && ((char)param_1[0x81] == '\0')) {
      FUN_004a31c8((int)param_1,'\0');
    }
    else {
      FUN_004a31c8((int)param_1,'\x02');
    }
  }
  else {
    FUN_004a31c8((int)param_1,'\x03');
  }
  return;
}

