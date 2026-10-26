/*
 * FUN_10003420 at 10003420
 * undefined __cdecl FUN_10003420(int param_1, undefined4 param_2, short * param_3, int param_4, uint param_5)
 * Address ranges: 10003420-10003537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10003420(int param_1,undefined4 param_2,short *param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_3 + 0xc);
  piVar2 = (int *)FUN_10003840(iVar1,param_3,param_4,0);
  FUN_100016b0(piVar2,DAT_100e3e14);
  uVar3 = FUN_100016a0(piVar2);
  uVar5 = 3;
  iVar4 = FUN_10001630((int)piVar2);
  FUN_10002b20(DAT_101f55a4,iVar4,uVar5,uVar3);
  FUN_10002ca0(7,param_5);
  _grDrawPolygonVertexList_8(param_2,param_1);
  param_1 = 1;
  do {
    if (*(int *)(param_3 + param_1 * 2 + 6) != 0) {
      if (param_1 == 0) {
        FUN_10003540(param_3,*(int *)(iVar1 + 0x10),piVar2,0);
        uVar3 = FUN_100016a0(piVar2);
        uVar5 = 3;
        iVar4 = FUN_10001630((int)piVar2);
        FUN_10002b20(DAT_101f55a4,iVar4,uVar5,uVar3);
        iVar4 = 7;
LAB_1000350a:
        FUN_10002ca0(iVar4,param_5);
      }
      else if (param_1 == 1) {
        FUN_10003540(param_3,*(int *)(iVar1 + 0x10),piVar2,1);
        uVar3 = FUN_100016a0(piVar2);
        uVar5 = 3;
        iVar4 = FUN_10001630((int)piVar2);
        FUN_10002b20(DAT_101f55a4,iVar4,uVar5,uVar3);
        iVar4 = 8;
        goto LAB_1000350a;
      }
      _grDrawPolygonVertexList_8(unaff_retaddr,unaff_EBX);
    }
    param_1 = param_1 + 1;
    if (1 < param_1) {
      return;
    }
  } while( true );
}

