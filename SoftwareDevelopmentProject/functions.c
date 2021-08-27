int FileEmpty(char filename[]) {
    int ret=0;
    FILE*fp;
    fp=fopen(filename, "r");
    if(fp==NULL) {
        ret=1;
    } else {
        fseek (fp, 0, SEEK_END);
        if (ftell(fp)==0) {
            ret=1;
        }
    }
    fclose(fp);
    return ret;
}
