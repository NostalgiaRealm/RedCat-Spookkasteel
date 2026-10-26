/*
 * FUN_004581d8 at 004581d8
 * undefined __register FUN_004581d8(undefined4 * param_1, char * param_2, int param_3, int * param_4)
 * Address ranges: 004581d8-00458253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004581d8(undefined4 *param_1,char *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  int local_c;
  char *local_8;
  
  local_c = param_3;
  local_8 = param_2;
  FUN_00403e04(param_4,param_1);
  iVar1 = FUN_00404030((int)local_8);
  iVar2 = FUN_00404030(local_c);
  if (iVar1 == iVar2) {
    iVar1 = FUN_00404030(*param_4);
    if (iVar1 != 0) {
      iVar2 = 1;
      do {
        uVar3 = FUN_00458420(local_8,*(char *)((int)param_1 + iVar2 + -1),&local_10);
        if ((char)uVar3 != '\0') {
          iVar4 = FUN_00404200(param_4);
          *(undefined1 *)(iVar4 + -1 + iVar2) = *(undefined1 *)(local_c + -1 + local_10);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

