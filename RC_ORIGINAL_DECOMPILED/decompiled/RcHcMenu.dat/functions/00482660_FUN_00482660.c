/*
 * FUN_00482660 at 00482660
 * undefined __register FUN_00482660(int * param_1, int param_2, char param_3)
 * Address ranges: 00482660-00482732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482660(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  int iVar5;
  int local_20;
  undefined1 local_1c;
  byte *local_18;
  undefined4 *local_14;
  char local_d;
  int local_c;
  int *local_8;
  
  local_18 = (byte *)0x0;
  local_14 = (undefined4 *)0x0;
  iVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xffffffc8;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 != 0) {
    iVar1 = FUN_00419530(param_2);
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      do {
        piVar2 = (int *)FUN_00419504(local_c,iVar4);
        if (piVar2 != local_8) {
          uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_0047d4c0);
          if ((char)uVar3 != '\0') {
            if (local_d == '\0') {
              if (*(char *)((int)piVar2 + 0x43) != '\0') {
                iVar5 = 0;
                FUN_00406a48((undefined4 *)PTR_PTR_0057213c,(int *)&local_18);
                local_20 = piVar2[2];
                local_1c = 0xb;
                FUN_00466e30(local_18,&local_20,0,iVar5);
              }
            }
            else {
              FUN_00406a48((undefined4 *)PTR_PTR_00572264,(int *)&local_14);
              FUN_00466d84(local_14,(int)local_8);
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *in_FS_OFFSET = iVar5;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

