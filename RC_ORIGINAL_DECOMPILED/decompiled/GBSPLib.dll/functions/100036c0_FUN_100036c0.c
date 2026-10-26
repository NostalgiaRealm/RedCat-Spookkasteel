/*
 * FUN_100036c0 at 100036c0
 * undefined FUN_100036c0(void)
 * Address ranges: 100036c0-100037ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100036c0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  piVar5 = param_2;
  *param_4 = 0;
  *param_3 = 0;
  piVar9 = param_4;
  piVar4 = param_1;
joined_r0x100036dc:
  do {
    while( true ) {
      if (piVar4 == (int *)0x0) {
        return;
      }
      uVar2 = piVar4[7];
      piVar3 = (int *)*piVar4;
      if (uVar2 == 3) break;
      piVar6 = (int *)FUN_10001800(piVar4);
      if (((uVar2 & 4) != 0) && (iVar8 = 0, 0 < piVar6[10])) {
        iVar7 = 0;
        do {
          if (*(int *)(iVar7 + 0x30 + (int)piVar6) == *piVar5) {
            pbVar1 = (byte *)(iVar7 + 0x3c + (int)piVar6);
            *pbVar1 = *pbVar1 | 0x10;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x14;
          piVar9 = param_4;
        } while (iVar8 < piVar6[10]);
      }
      param_1 = piVar6;
      if ((uVar2 & 1) == 0) goto LAB_1000378e;
      *piVar6 = *param_3;
      *param_3 = (int)piVar6;
      piVar4 = piVar3;
    }
    FUN_10001de0(piVar4,*piVar5,0,0x10,0,&param_1,&param_2);
    if (param_1 != (int *)0x0) {
      *param_1 = *param_3;
      *param_3 = (int)param_1;
    }
    piVar4 = piVar3;
  } while (param_2 == (int *)0x0);
  *param_2 = *piVar9;
  piVar6 = param_2;
  goto LAB_1000379c;
LAB_1000378e:
  piVar4 = piVar3;
  if ((uVar2 & 2) != 0) {
    *piVar6 = *piVar9;
LAB_1000379c:
    *piVar9 = (int)piVar6;
    piVar4 = piVar3;
  }
  goto joined_r0x100036dc;
}

