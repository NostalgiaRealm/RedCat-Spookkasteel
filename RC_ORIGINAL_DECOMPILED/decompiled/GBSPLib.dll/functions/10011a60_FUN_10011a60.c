/*
 * FUN_10011a60 at 10011a60
 * undefined FUN_10011a60(void)
 * Address ranges: 10011a60-10011c68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10011a60(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char local_51c [284];
  undefined1 auStack_400 [1024];
  
  uVar6 = 0xffffffff;
  do {
    pcVar10 = param_1;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  pcVar8 = local_51c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_10012920(local_51c);
  FUN_100128c0(local_51c,&DAT_10039dfc);
  iVar2 = FUN_10014700(local_51c,0,9);
  if (iVar2 != 0) {
    iVar3 = FUN_10014ad0();
    iVar2 = 0;
    if (iVar3 != 0) {
      uVar6 = 0;
      iVar2 = FUN_10014b50();
      while (iVar2 == 1) {
        uVar6 = uVar6 + 1;
        iVar2 = FUN_10014b50();
      }
      FUN_10014b30();
      iVar2 = FUN_10014ad0();
      if ((iVar2 != 0) &&
         (DAT_1031305c = uVar6, DAT_10313058 = (undefined4 *)FUN_10014310(uVar6 * 8),
         DAT_10313058 != (undefined4 *)0x0)) {
        puVar9 = DAT_10313058;
        for (iVar3 = (DAT_1031305c & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        iVar3 = FUN_10014b50();
        if (iVar3 == 1) {
          iVar3 = 0;
          do {
            FUN_10014b60();
            uVar4 = FUN_10033491(auStack_400);
            *(undefined4 *)(iVar3 + (int)DAT_10313058) = uVar4;
            if (*(int *)(iVar3 + (int)DAT_10313058) == 0) goto LAB_10011c32;
            iVar5 = FUN_10014880(1);
            if (iVar5 == 0) {
              pcVar10 = s_InitTextures__Unable_to_load_tex_10039dc4;
LAB_10011c29:
              (*DAT_1014e358)(pcVar10,auStack_400);
              goto LAB_10011c32;
            }
            uVar4 = FUN_10019200();
            *(undefined4 *)(iVar3 + 4 + (int)DAT_10313058) = uVar4;
            FUN_10014990();
            if (*(int *)(iVar3 + 4 + (int)DAT_10313058) == 0) {
              pcVar10 = s_InitTextures__Unable_to_load_tex_10039d94;
              goto LAB_10011c29;
            }
            iVar3 = iVar3 + 8;
            iVar5 = FUN_10014b50();
          } while (iVar5 == 1);
        }
        FUN_10014990();
        return 1;
      }
    }
LAB_10011c32:
    FUN_10014990();
    if (iVar2 != 0) {
      FUN_10014b30();
    }
  }
  FUN_10011c70();
  (*DAT_1014e358)(s_InitTextures__Unable_to_load_tex_10039d5c,local_51c);
  return 0;
}

