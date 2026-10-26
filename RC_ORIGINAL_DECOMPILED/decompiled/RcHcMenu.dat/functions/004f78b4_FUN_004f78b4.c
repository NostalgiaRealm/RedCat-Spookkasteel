/*
 * FUN_004f78b4 at 004f78b4
 * undefined __register FUN_004f78b4(int * param_1, uint * param_2, undefined1 * param_3)
 * Address ranges: 004f78b4-004f7956
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 27 for THeaderControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f3dfc slot 27 for
   THeaderControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f78b4(int *param_1,uint *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  int iVar7;
  
  if (*param_2 == 0x200) {
    puVar4 = &stack0xfffffffc;
    uVar6 = FUN_004f787c(param_1,param_2,(int)param_3,(int)&stack0xfffffffc);
    param_3 = puVar4;
    if (((char)uVar6 != '\0') && (param_1[0x86] != 0)) {
      bVar5 = FUN_00432920(param_1);
      param_3 = extraout_ECX;
      if (bVar5) {
        iVar7 = ((int)(short)param_2[2] - param_1[0x88]) + param_1[0x87];
        iVar1 = param_1[0x86];
        iVar2 = *(int *)(iVar1 + 0x14);
        bVar5 = iVar7 < iVar2;
        if (bVar5) {
          iVar7 = iVar7 - iVar2;
        }
        iVar2 = *(int *)(iVar1 + 0x18);
        bVar3 = iVar2 < iVar7;
        if (bVar3) {
          iVar7 = iVar7 - iVar2;
        }
        FUN_00403270(param_1,iVar1,iVar7);
        param_3 = extraout_ECX_00;
        if (bVar3 || bVar5) {
          *(short *)(param_2 + 2) = (short)param_2[2] - (short)iVar7;
        }
      }
    }
  }
  FUN_004361cc(param_1,param_2,param_3);
  return;
}

