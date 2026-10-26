/*
 * FUN_0044b2d8 at 0044b2d8
 * undefined __register FUN_0044b2d8(int * param_1, int param_2, int * param_3)
 * Address ranges: 0044b2d8-0044b32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b2d8(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  
  if (param_2 != param_1[0x24]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x50))();
      if (cVar1 == '\0') goto LAB_0044b31d;
    }
    if (param_2 == 0) {
      *(char *)((int)param_1 + 0x211) = (char)param_1[0x9a];
    }
    else {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)((int)param_1 + 0x211);
      *(undefined1 *)((int)param_1 + 0x211) = 0;
    }
  }
LAB_0044b31d:
  FUN_004320c4(param_1,param_2,param_3);
  return;
}

