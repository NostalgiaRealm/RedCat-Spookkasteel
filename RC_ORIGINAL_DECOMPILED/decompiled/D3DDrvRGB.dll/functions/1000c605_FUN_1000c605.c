/*
 * FUN_1000c605 at 1000c605
 * undefined __cdecl FUN_1000c605(PEXCEPTION_RECORD param_1, PVOID param_2, DWORD param_3, undefined4 param_4, int param_5, byte * param_6, byte * param_7, int * param_8, int param_9, PVOID param_10)
 * Address ranges: 1000c605-1000c67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_1000c605(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000c7c5((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_10008eca(param_10,param_1);
  FUN_1000c551((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000c680((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_10008e88(UNRECOVERED_JUMPTABLE);
  }
  return;
}

