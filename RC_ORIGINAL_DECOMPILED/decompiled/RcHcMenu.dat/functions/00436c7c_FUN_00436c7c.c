/*
 * FUN_00436c7c at 00436c7c
 * undefined __register FUN_00436c7c(int * param_1, int param_2)
 * Address ranges: 00436c7c-00436cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436c7c(int *param_1,int param_2)

{
  HBRUSH hbr;
  RECT local_18;
  
  if (((char)param_1[0x7a] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
    hbr = (HBRUSH)FUN_0041c34c(param_1[0x4c]);
    (**(code **)(*param_1 + 0x40))(param_1,&local_18);
    FillRect(*(HDC *)(param_2 + 4),&local_18,hbr);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

